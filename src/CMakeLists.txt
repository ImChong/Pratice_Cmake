set(exe_name runCalc)
add_executable(${exe_name} main.c)
target_link_libraries(${exe_name} PUBLIC ${lib_calc_name})