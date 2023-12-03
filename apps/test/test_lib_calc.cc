#include "gtest/gtest.h"

extern "C" {
    #include "lib_calc.h"
}

/**********************************************************************************/
/*                                                                                */
/*                                   TEST SUITE                                   */
/*                                                                                */
/**********************************************************************************/
class TestLibCalc : public ::testing::Test {
 public:
    static void SetUpTestCase() {
        // Code here will be called once before all tests
    }
    void SetUp() override {
        // Code here will be called before each test
    }
    void TearDown() override {
        // Code here will be called after each test
    }
    static void TearDownTestCase() {
        // Code here will be called once after all tests
    }
};

/**********************************************************************************/
/*                                                                                */
/*                                   TEST CASES                                   */
/*                                                                                */
/**********************************************************************************/
TEST_F(TestLibCalc, testAdd) {
    EXPECT_EQ(3, add(1, 2));
}