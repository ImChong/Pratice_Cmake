cmake_minimum_required(VERSION 3.17)
project(Calculator LANGUAGES C)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

set(lib_calc_name calc)
add_library(${lib_calc_name} STATIC src/lib_calc.c include/calc/lib_calc.h)
target_include_directories(${lib_calc_name} PUBLIC include/calc)
target_compile_features(${lib_calc_name} PUBLIC c_std_11)

set(exe_name runCalc)
add_executable(${exe_name} src/main.c)
target_link_libraries(${exe_name} PUBLIC ${lib_calc_name})