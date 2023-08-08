cmake_minimum_required(VERSION 3.17)
project(Calculator LANGUAGES C)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

set(lib_calc_name calc)
add_library(${lib_calc_name} STATIC src/lib_calc.c include/calc/lib_calc.h)
target_include_directories(${lib_calc_name} PUBLIC include/calc)
target_compile_features(${lib_calc_name} PUBLIC c_std_11)

add_subdirectory(src)