#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) totalSum += num;

    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (leftSum == totalSum - leftSum - nums[i])
            return i;
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums);
    return 0;
}



// ✅ Pivot Index – LeetCode 724 (C++ for VS Code)
// 🔍 Problem Statement

// Given an array nums, find pivot index such that:

// sum of elements to the left
// =
// sum of elements to the right
// sum of elements to the left=sum of elements to the right

// If multiple pivot indexes exist, return leftmost.

// If none, return -1.

// 💡 Idea (Prefix Sum)

// Calculate total sum of array

// Traverse array:

// leftSum = sum of elements to the left

// rightSum = totalSum - leftSum - nums[i]

// If leftSum == rightSum → return i


// ⏱ Time Complexity

// O(n) → single pass + sum calculation

// 📦 Space Complexity

// O(1) → constant extra space



// Input:  [1, 7, 3, 6, 5, 6]
// Output: 3
// Explanation: Left sum = 1+7+3 = 11, Right sum = 5+6 = 11


//LEETCODE- 724
// int pivotIndex(int* nums, int numsSize) {
//     int totalSum = 0;
//     for (int i = 0; i < numsSize; i++) {
//         totalSum += nums[i];
//     }

//     int leftSum = 0;
//     for (int i = 0; i < numsSize; i++) {
//         if (leftSum == totalSum - leftSum - nums[i]) {
//             return i;  // pivot found
//         }
//         leftSum += nums[i];
//     }

//     return -1;  // no pivot index
// }
