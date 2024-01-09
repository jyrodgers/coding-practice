#include <gtest/gtest.h>
#include "MaximumSubarray.h"  // Directly include your cpp file

// Test fixture class
class MaximumSubarrayTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Setup code, if needed
    }

    void TearDown() override {
        // Cleanup code, if needed
    }
};

TEST_F(MaximumSubarrayTest, ContainsNegativeNumbers) {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int result = findMaximumSubarray(nums);
    std::cout << "ContainsNegativeNumbers result = " << result << std::endl;

    EXPECT_EQ(6, result);
}

TEST_F(MaximumSubarrayTest, ContainsSingleElement) {
    std::vector<int> nums = {1};

    int result = findMaximumSubarray(nums);
    std::cout << "ContainsSingleElement result = " << result << std::endl;

    EXPECT_EQ(1, result);
}
