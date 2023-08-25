include(FetchContent)       # 下载gtest至本地并编译
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.13.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)         # 包含 Google Test 框架的相关设置，以便在 CMake 项目中进行 Google Test 测试的集成。
enable_testing()            # 开启测试

set(test_exe_name testCalc)     # 设置单元测试可执行文件名
add_executable(${test_exe_name} test_lib_calc.cc)       # 添加源文件
# TODO: 添加 gmock_main
target_link_libraries(${test_exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/lib/libcalc.a gtest_main)  # 添加库文件
target_include_directories(${test_exe_name} PRIVATE ${PROJECT_SOURCE_DIR}/include/calc)         # 添加头文件地址

gtest_discover_tests(${test_exe_name})      # 编译所有单元测试
