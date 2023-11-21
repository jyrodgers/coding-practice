#include <iostream>
#include <vector>
#include <stdexcept> // For std::invalid_argument

void mergeSortedArrays(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{

    if (nums1.size() != m + n) {
        throw std::invalid_argument("The length of nums1 must be equal to m + n.");
    }

    if ( 1  > m + n ) {
        std::cout << "m = " << m << " n = " << n << " m + n = " << ( m + n );
        throw std::invalid_argument("The sum of m + n must be greater than or equal to 1.");
    }

    int i = m - 1;  // Last valid element index in nums1
    int j = n - 1;  // Last element index in nums2
    int k = m + n - 1;  // Last index in nums1 after merge

    // Use reverse iterators to merge from the end of nums1
    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        } else
        {
            nums1[k--] = nums2[j--];
        }
    }
}
