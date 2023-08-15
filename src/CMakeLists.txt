set(lib_calc_name calc)     # 设置库名
add_library(${lib_calc_name} STATIC lib_calc.c ${PROJECT_SOURCE_DIR}/include/calc/lib_calc.h)   # 添加源文件与头文件
target_include_directories(${lib_calc_name} PRIVATE ${PROJECT_SOURCE_DIR}/include/calc)         # 添加头文件地址