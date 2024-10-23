VERSION 0.8

FROM ubuntu:24.10
WORKDIR /app

all: # earthly +all
    BUILD +build-server
    BUILD +build-client
    BUILD +build-server-docker


cuda:
    FROM nvidia/cuda:12.6.2-devel-ubuntu24.04


build-server:
    ARG NVCCFLAGS="-O3 -dlto -lnvidia-ml -lcuda"
    FROM +cuda
    COPY server/server.cu .
    COPY codegen codegen
    RUN nvcc -o server $NVCCFLAGS server.cu codegen/gen_server.cpp codegen/manual_server.cpp 
    SAVE ARTIFACT server AS LOCAL scuda-server


build-server-docker: # docker run --gpus all -it -p 14833:14833 scuda:latest
    FROM +cuda
    COPY +build-server/server /app/server
    ENV SCUDA_PORT=14833
    EXPOSE $SCUDA_PORT
    ENTRYPOINT ["/app/server"]
    SAVE IMAGE scuda:latest


build-client:
    ARG CXX=g++
    ARG CXXFLAGS="-fPIC -O3 -Wall -Wextra -DNDEBUG -std=c++17 -flto=auto -ffast-math -march=native -mtune=native -pipe -fomit-frame-pointer" # -Ofast
    ARG linkflags="-Wl,-O3 -Wl,--as-needed -Wl,--gc-sections -fuse-ld=gold"
    FROM +cuda
    COPY client/client.cpp .
    COPY codegen codegen
    RUN $CXX $CXXFLAGS -c client.cpp -o client.o -I/usr/local/cuda/include
    RUN $CXX $CXXFLAGS -c codegen/gen_client.cpp -o gen_client.o -I/usr/local/cuda/include
    RUN $CXX $CXXFLAGS -c codegen/manual_client.cpp -o manual_client.o -I/usr/local/cuda/include
    RUN $CXX $linkflags -shared -o libscuda.so client.o gen_client.o manual_client.o -L/usr/local/cuda/lib64 -lcudart -lstdc++
    SAVE ARTIFACT libscuda.so AS LOCAL libscuda.so

# This does not work for me, seems to be related to https://github.com/earthly/earthly/issues/830
# Error response from daemon: could not select device driver "nvidia" with capabilities: [[gpu]]
# test: # earthly --allow-privileged +test
#     FROM nvidia/cuda:12.6.2-devel-ubuntu24.04
#     BUILD +build-server-docker
#     COPY +build-client/libscuda.so /app/libscuda.so
#     COPY docker-compose.yml /
#     RUN apt-get update && apt-get install -y python3 python3-pip && pip3 install torch --break-system-packages 
#     WITH DOCKER --load scuda:latest=+build-server-docker --compose /docker-compose.yml
#         RUN LD_PRELOAD="/app/libscuda.so" python3 -c "import torch; print('CUDA Available:', torch.cuda.is_available())"
#     END


# SCUDA_SERVER=127.0.0.1 LD_PRELOAD="/mnt/e/src/scuda/libscuda.so" python3 -c "import torch; print('CUDA Available:', torch.cuda.is_available())"