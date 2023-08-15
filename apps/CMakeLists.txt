set(exe_name runCalc)       # 设置主程序可执行文件名
add_executable(${exe_name} main.c)      # 添加源文件
target_link_libraries(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/lib/libcalc.a)          # 添加库文件
target_include_directories(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/include/calc)      # 添加头文件