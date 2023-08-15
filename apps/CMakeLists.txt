set(exe_name runCalc)
add_executable(${exe_name} main.c)
target_link_libraries(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/lib/libcalc.a)
target_include_directories(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/include/calc)