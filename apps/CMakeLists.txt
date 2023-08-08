# message(FATAL_ERROR "${lib_calc_name}")

set(exe_name runCalc)
add_executable(${exe_name} main.c)
target_link_libraries(${exe_name} PUBLIC ${lib_calc_name})
target_include_directories(${exe_name} PUBLIC ${PROJECT_SOURCE_DIR}/include/calc)
target_compile_features(${exe_name} PUBLIC c_std_11)