# 添加子目录
add_subdirectory(src)

# 设置主程序可执行文件名
set(exe_name main)
# 生成主程序可执行文件
add_executable(${exe_name} main.c ${PROJECT_SOURCE_DIR}/apps/src/lib_calc.c)
# 添加库文件和头文件地址
target_link_libraries(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/output/lib/libcalc.a)
target_include_directories(${exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/apps/inc)
# 设置可执行文件的输出目录
set_target_properties(${exe_name} PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/exe/main)

# 添加测试
set(BUILD_TESTING ON)       # 打开测试编译选项
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(test)     # 添加gtest测试的源文件
endif()