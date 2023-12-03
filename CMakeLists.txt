# 设置CMake最低版本
cmake_minimum_required(VERSION 3.20)

# 设置项目名称
project(Calculator LANGUAGES C CXX)

# 设置编译选项
add_compile_options(-Wall -Wextra)

# 设置C/C++标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出路径
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)                          # 库文件输出地址
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)                    # 可执行文件输出地址

# 添加子目录
add_subdirectory(src)       # 库文件的源文件
# add_subdirectory(apps)      # 主程序的源文件

# 添加测试
set(BUILD_TESTING OFF)       # 打开测试编译选项
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)     # 添加gtest测试的源文件
endif()