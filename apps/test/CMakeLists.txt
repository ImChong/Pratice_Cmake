# 引入ExternalProject模块
include(ExternalProject)                                                                    # 引入ExternalProject模块
set_directory_properties(PROPERTIES EP_PREFIX ${CMAKE_BINARY_DIR}/ThirdParty/googletest)    # 设置下载目录

# 添加Google Test的下载和编译
ExternalProject_Add(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=<INSTALL_DIR>
)

# 添加Google Test的头文件和库文件的搜索路径
include_directories(${CMAKE_BINARY_DIR}/ThirdParty/googletest/include)
link_directories(${CMAKE_BINARY_DIR}/ThirdParty/googletest/lib)

# 添加头文件路径
include_directories(${PROJECT_SOURCE_DIR}/apps/inc)

# 创建一个包含所有测试目标的列表
set(TEST_TARGETS lib_calc)
set(TEST_TARGET_NAMES test_${TEST_TARGETS})

# 对每个测试目标执行操作
foreach(TARGET ${TEST_TARGETS})
    # 创建一个新的测试目标
    add_executable(${TEST_TARGET_NAMES} ${TEST_TARGET_NAMES}.cc ${PROJECT_SOURCE_DIR}/apps/src/${TEST_TARGETS}.c)

    # 将Google Test库链接到测试目标
    add_dependencies(${TEST_TARGET_NAMES} googletest)
    target_link_libraries(${TEST_TARGET_NAMES} gtest gtest_main)

    # 设置可执行文件的输出目录
    set_target_properties(${TEST_TARGET_NAMES} PROPERTIES
                                RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output/exe/test)
endforeach()