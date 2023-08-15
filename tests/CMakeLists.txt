include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.13.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(test_exe_name test_Calc)
add_executable(${test_exe_name} test_lib_calc.cc)
target_link_libraries(${test_exe_name} PUBLIC ${PROJECT_SOURCE_DIR}/lib/libcalc.a)
target_include_directories(${test_exe_name} PUBLIC ${PROJECT_SOURCE_DIR}/include/calc)

target_link_libraries(${test_exe_name} gtest_main)

include(GoogleTest)
gtest_discover_tests(${test_exe_name})