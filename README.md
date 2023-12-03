# Template_Cmake

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Build and Run Tests](https://github.com/ImChong/Template_Cmake/actions/workflows/buildRunTestWorkflow.yml/badge.svg)](https://github.com/ImChong/Template_Cmake/actions/workflows/buildRunTestWorkflow.yml)

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
├── CMakeLists.txt                # Root CMakeLists.txt
├── LICENSE
├── README.md                     # This file
├── apps                          # Application folder
│   ├── CMakeLists.txt              # Application CMakeLists.txt
│   ├── inc                         # Application include folder
│   │   └── lib_calc.h                # Application include file
│   ├── main.c                      # Application main file
│   ├── scripts                     # Application scripts folder
│   │   ├── helper.py                 # Application helper script
│   │   ├── killExes.bat              # Application killExes script
│   │   └── killExes.sh               # Application killExes script
│   ├── src                         # Application source folder
│   │   ├── CMakeLists.txt            # Application source CMakeLists.txt
│   │   └── lib_calc.c                # Application source file
│   └── test                        # Application test folder
│       ├── CMakeLists.txt            # Application test CMakeLists.txt
│       └── test_lib_calc.cc          # Application test file
├── doc                           # Documentation folder
│   └── basicStructure.txt          # Basic folder structure
└── output                        # Output folder
    ├── exe                         # Output executable folder
    │   ├── main                      # Output main executable folder
    │   └── test                      # Output test executable folder
    └── lib                         # Output library folder
        └── libcalc.a                 # Output library file
```

## Build and Run

To configure (in root folder):

```bash
mkdir build
cd build
cmake ..
```

To build (in build folder):

```bash
cmake --build .
```

To run (in output\exe\main folder):

```bash
./main.exe
```

To test (in output\exe\test folder):

```bash
./test_lib_XXX.exe
```
