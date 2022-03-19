#  Lunar 2: Eternal Blue Complete PSX Decompilation

this is a  decompilation Project of "Lunar 2: Eternal Blue Complete" `SLUS_010.71` `SHA1:74660524724730e5a6acfe32ee33010fc3451e74`.

## Building

The instructions below assume that you will be using `Ubuntu 20.04`; either natively, via [WSL2](https://docs.microsoft.com/en-us/windows/wsl/install-win10), or via [Docker](https://docs.docker.com/get-docker/).

Please check the [packages.txt](packages.txt) and [requirements.txt](requirements.txt) for the prerequisite Linux and Python packages respectively. You'll also need the `mips-elf` flavour of `binutils`.

**NOTE:** You can take the precompiled binutils binaries from [here](https://github.com/mkst/esa/releases).

### Cloning

Clone the repository; note the `--recursive` flag to fetch submodules at the same time:

```sh
git clonegit@github.com:Zackmon/lunar2-psx-decomp.git --recursive
```

Navigate into the freshly cloned repo

```sh
cd lunar2-psx-decomp
```

Create a folder named "SLUS_010" and extract the content of the iso in it 

### Using Docker

Spin up a container using the pre-built, ready-to-go, image:
```sh
docker run --rm -ti -v $(pwd):/lunar2 ghcr.io/zackmon/lunar2-psx-decomp:latest
```

### Common Steps

**Extract code/data from `SLUS_010.71`:**
```sh
make extract
```

**Rebuild as `build/boot.dat`:**
```
make
```

## Modifying Code

Once you have an :ok: build, copy it into the `expected/` folder so `asm-differ` can use it as a reference.

```
cp -r build/ expected/
```

#References
The project structure and tools have been influenced by the following repos , without using them as a reference I would've not been able to start this project

https://github.com/mkst/ctr

https://github.com/Xeeynamo/sotn-decomp/