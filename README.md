# Practice_Cmake
# Download required softwares
- Windows:

  - [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw)

  - [CMake Download](https://cmake.org/download/)

- Linux(Ubuntu 20.04):
  ```shell
  sudo apt update
  sudo apt upgrade
  sudo apt install cmake
  sudo apt install gcc
  sudo apt install g++
  sudo apt install gdb
  ```

- CMake practice based on:

  - [CMake official tutorial](https://cmake.org/cmake/help/v3.25/guide/tutorial/index.html)

  - [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)

# Build and Run
This is an example project using CMake.

The requirements are:

- CMake 3.11 or better; 3.14+ highly recommended.
- A C++17 compatible compiler
- The Boost libararies (header only part is fine)
- Git
- Doxygen (optional)

To configure:

```bash
cmake -S . -B build
```

Add `-GNinja` if you have Ninja.

To build:

```bash
cmake --build build
```

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target test
```

To build docs (requires Doxygen, output in `build/docs/html`):

```bash
cmake --build build --target docs
```

To use an IDE, such as Xcode:

```bash
cmake -S . -B xbuild -GXcode
cmake --open xbuild
```

The CMakeLists show off several useful design patterns for CMake.
