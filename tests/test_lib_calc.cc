#include <gtest/gtest.h>

extern "C" {
    #include "lib_calc.h"
}

// Demonstrate some basic assertions.
TEST(test_helperFunc, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
    // Expect equality.
    EXPECT_EQ(add(5, 4), 9);
}