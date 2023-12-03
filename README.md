# Practice_Cmake

This is a template for c language within VSCode CMake Environment

CMake practice based on:

- [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)

- [CMake Official Tutorial](https://cmake.org/cmake/help/v3.25/guide/tutorial/index.html)

The requirements are:

- CMake 3.11 or better; 3.14+ highly recommended.
- A C++17 compatible compiler
- Git

## Download Required Softwares

- Windows:

  - [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw)

  - [CMake Download](https://cmake.org/download/)

- Linux (Ubuntu 20.04):
  
  ```shell
  sudo apt update
  sudo apt upgrade
  sudo apt install cmake
  sudo apt install gcc
  sudo apt install g++
  sudo apt install gdb
  ```

## Folder Structure

```shell
.
├─3rdParty      # googletest
├─apps          # main.c
├─bin           # .exe file
├─build
├─cmake         # cmake helper functions
├─doc           # documentation
├─include       # library header
│  └─calc
├─lib           # library output
├─scripts       # python scripts
├─src           # library source
└─tests         # gtest
```

## Build and Run

To configure:

```bash
cmake -S . -B build
```

To build:

```bash
cmake --build build
```

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target testCalc
```
