FROM nvidia/cuda:12.6.2-devel-ubuntu24.04 as Builder
ENV SCUDA_PORT=14833
WORKDIR /build
COPY server.cu .
COPY codegen codegen
RUN nvcc -o server -O3 -dlto -lnvidia-ml -lcuda server.cu codegen/gen_server.cpp codegen/manual_server.cpp

FROM nvidia/cuda:12.6.2-runtime-ubuntu24.04
ENV SCUDA_PORT=14833
WORKDIR /app
COPY --from=Builder /build/server /app/
EXPOSE $SCUDA_PORT
ENTRYPOINT ["/app/server"]