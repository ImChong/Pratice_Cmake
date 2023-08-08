set(lib_calc_name calc)
add_library(${lib_calc_name} STATIC lib_calc.c ${PROJECT_SOURCE_DIR}/include/calc/lib_calc.h)
target_include_directories(${lib_calc_name} PUBLIC ${PROJECT_SOURCE_DIR}/include/calc)
target_compile_features(${lib_calc_name} PUBLIC c_std_11)