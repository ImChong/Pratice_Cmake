cmake_minimum_required(VERSION 3.16)
project(Calculator LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)                          # 库文件输出地址
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)                       # 可执行文件输出地址
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})     # cmake工具文件地址

add_subdirectory(src)       # 库文件的源文件
add_subdirectory(apps)      # 主程序的源文件

set(BUILD_TESTING ON)       # 打开测试编译选项
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)     # 添加gtest测试的源文件
endif()