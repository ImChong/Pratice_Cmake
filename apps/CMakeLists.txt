# 设置主程序可执行文件名
set(exe_name main)

# 生成主程序可执行文件
add_executable(${exe_name} main.c)

# 添加库文件和头文件地址
target_link_libraries(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/output/lib/libcalc.a)
target_include_directories(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/apps/inc/calc)

# 设置可执行文件的输出目录
set_target_properties(${exe_name} PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/exe/main)