# 设置库文件名
set(lib_calc_name calc)

# 生成静态库
add_library(${lib_calc_name} STATIC lib_calc.c)

# 添加头文件地址
target_include_directories(${lib_calc_name} PRIVATE ${PROJECT_SOURCE_DIR}/include/calc)