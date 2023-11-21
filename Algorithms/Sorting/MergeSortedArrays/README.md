# Merge Two Sorted Arrays

This directory contains my solution to the classic problem of merging two sorted arrays into a single sorted array in an efficient manner.

## Problem Description

The challenge involves merging two sorted integer arrays, `nums1` and `nums2`.

- The arrays `nums1` and `nums2` are sorted in non-decreasing order.
- The first array, `nums1`, has a size of `m` + `n`, where `m` is the number of elements initialized in `nums1`, and `n` is the number of elements in `nums2`.
- The last `n` elements of `nums1` are set to `0` and should be ignored in the merging process.

## Constraints

- The final sorted array should not be returned by the function but instead be stored inside the array `nums1`.
- The number of elements initialized in `nums1` and `nums2` are `m` and `n` respectively.
- No additional array or data structure may be created.
- The size of `m` and `n` are both greater than or equal to `0`.
- The size of `m + n` is greater than or equal to `1`.

## Test Cases

The solution includes several test cases to ensure its correctness:

### Normal Scenarios

- Both nums1 and nums2 have multiple elements, and merging results in a correctly sorted array.
- nums1 or nums2 is larger than the other, but both have elements.

### Edge Cases

- One of the arrays (nums1 or nums2) is empty, and the other has multiple elements.
- Both arrays are empty (m and n are zero).
- All elements in nums1 are smaller than those in nums2, and vice versa.

### Special Values

- Arrays containing negative numbers.
- Arrays containing the same repeating value.

### Error Scenarios

- nums1.size() is less than m + n.
- The sum of m + n is less than 1.

## Solution

The solution to the problem of merging two sorted arrays in-place involves working backwards from the end of `nums1`, which has been sized to accommodate all elements from both arrays.
The process starts by comparing the last elements of each array, placing the larger of these two elements into the final position of `nums1`.

This comparison and placement continue, moving backwards through both arrays.
Each time, the larger of the two elements being compared is placed in the next available position from the end of `nums1`.
If elements from `nums2` are larger or if all the originally filled elements of `nums1` have been placed, they are moved into the remaining positions.

This process ensures that no existing elements in `nums1` are overwritten before they are placed in their correct position.
The merging is completed when all elements from `nums2` have been moved into `nums1`, resulting in a single, fully merged and sorted array.
