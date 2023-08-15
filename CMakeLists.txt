cmake_minimum_required(VERSION 3.20)
project(Calculator LANGUAGES C CXX)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

add_subdirectory(src)
add_subdirectory(apps)

set(BUILD_TESTING ON)
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()