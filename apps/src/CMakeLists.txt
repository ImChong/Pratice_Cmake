# 设置库文件名
set(lib_calc_name calc)
# 生成静态库
add_library(${lib_calc_name} STATIC ${PROJECT_SOURCE_DIR}/apps/src/lib_calc.c)
# 添加头文件地址
target_include_directories(${lib_calc_name} PRIVATE ${PROJECT_SOURCE_DIR}/apps/inc)
# 设置库文件输出路径
set_target_properties(${lib_calc_name} PROPERTIES
                        LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/lib)