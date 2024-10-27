ARG BASE_IMAGE=nvidia/cuda:12.6.2-devel-ubuntu24.04

FROM ${BASE_IMAGE} AS builder
ENV SCUDA_PORT=14833
WORKDIR /build
COPY server/server.cu .
COPY codegen codegen
RUN nvcc -o server -DVERBOSE=1 -lnvidia-ml -lcuda server.cu codegen/gen_server.cpp codegen/manual_server.cpp

FROM ${BASE_IMAGE}
ENV SCUDA_PORT=14833
WORKDIR /app
COPY --from=builder /build/server /app/
EXPOSE $SCUDA_PORT
CMD ["/app/server"]