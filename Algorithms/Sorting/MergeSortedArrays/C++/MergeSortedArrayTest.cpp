#include <gtest/gtest.h>
#include "MergeSortedArray.h"  // Directly include your cpp file

// Test fixture class
class MergeSortedArrayTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Setup code, if needed
    }

    void TearDown() override {
        // Cleanup code, if needed
    }
};

// Test case for merging two non-empty arrays
TEST_F(MergeSortedArrayTest, MergesNonEmptyArrays) {
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    mergeSortedArrays(nums1, m, nums2, n);

    std::vector<int> expected = {1, 2, 2, 3, 5, 6};
    EXPECT_EQ(nums1, expected);
}

// Test case for merging two empty arrays
TEST_F(MergeSortedArrayTest, MergesEmptyArrays) {
    std::vector<int> nums1 = {0};
    std::vector<int> nums2 = {0};
    int m = 0, n = 0;

    EXPECT_THROW(mergeSortedArrays(nums1, m, nums2, n), std::invalid_argument);
}

// Test case for merging empty nums1 with non-empty nums2
TEST_F(MergeSortedArrayTest, MergesEmptyNums1Array) {
    std::vector<int> nums1 = {0};
    std::vector<int> nums2 = {1};
    int m = 0, n = 1;

    mergeSortedArrays(nums1, m, nums2, n);

    std::vector<int> expected = {1};
    EXPECT_EQ(nums1, expected);
}

// Test case for merging non-empty nums1 with empty nums2
TEST_F(MergeSortedArrayTest, MergesEmptyNums2Array) {
    std::vector<int> nums1 = {1};
    std::vector<int> nums2 = {0};
    int m = 1, n = 0;

    mergeSortedArrays(nums1, m, nums2, n);

    std::vector<int> expected = {1};
    EXPECT_EQ(nums1, expected);
}
