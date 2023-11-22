#include <vector>    // For std::vector
#include <stdexcept> // For std::invalid_argument

void mergeSortedArrays(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{

    if (nums1.size() != m + n)
    {
        throw std::invalid_argument("The length of nums1 must be equal to m + n.");
    }

    if ( 1  > m + n )
    {
        throw std::invalid_argument("The sum of m + n must be greater than or equal to 1.");
    }

    int i = m - 1;      // Last valid element index in nums1
    int j = n - 1;      // Last element index in nums2
    int k = m + n - 1;  // Last index in nums1 after merge

    // While there are still elements to be compared in nums2
    while (j >= 0)
    {
        // If there are elements to be compared in nums1 and
        // between the compared elements nums1 is larger than nums2
        if (i >= 0 && nums1[i] > nums2[j])
        {
            // Place nums1 element in place
            nums1[k--] = nums1[i--];
        } else
        {
            // Otherwise place nums2 element in place
            nums1[k--] = nums2[j--];
        }
    }
}
