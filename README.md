# SCUDA: CUDA-over-IP

SCUDA is a CUDA over IP bridge allowing GPUs on remote machines to be attached
to CPU-only machines.

## Setup

### Using prebuilt binaries / images

You can find prebuilt binaries in the [release tab](https://github.com/K0IN/scuda/releases/latest)
There is also a Docker image `ghcr.io/k0in/scuda:latest` which can be used.
For an example setup you can look at [docker-compose.yml](docker-compose.yml).

### Build locally

Build using [earthly](https://earthly.dev/)

> earthly +all

if you want to cross compile (supported: linux/arm64 and linux/amd64) the binaries, you can also run

> earthly +cross

If you want to build it using plain docker you can also build the provided docker file.

> docker build --build-arg BASE_IMAGE=nvidia/cuda:12.6.2-devel-ubuntu24.04 . -t scuda:local

## Usage

To use SCUDA, ensure the server is running on a machine with a GPU:

```sh
scuda-server
```

or using docker

```sh
docker run --gpus all -p 14833:14833 ghcr.io/k0in/scuda:latest
```

The server port can be changed using the environment variable `SCUDA_PORT`.

On the client machine, set the `SCUDA_SERVER` environment variable to the server's IP and set the `SCUDA_PORT` if modified, and preload the SCUDA library:

```sh
export SCUDA_SERVER=<ip>
# export SCUDA_PORT=<port>
LD_PRELOAD="libscuda.so" nvidia-smi
```

<!--
I could'nt find a reference to this in the source code, so i removed it for now.

By default, the client library passes calls through to the client. In other words,
it does not connect to a server. To connect to a server, create a file with the
host you wish to connect to

```
~/.config/scuda/host
```
-->

## Acknowledgements

I (K0IN) did nothing exepct writing a dockerfile, readme and a build that i can understand.

ALL CREDITS GO TO THE AWESOME WORK OF [kevmo314](https://github.com/kevmo314/scuda) the original author of this project.
thank you for your work.
