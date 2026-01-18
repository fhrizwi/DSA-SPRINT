#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);  // Output: 2
    return 0;
}




// ✅ Majority Element – LeetCode 169 (C++ for VS Code)
// 🔍 Problem Statement

// Given an array nums of size n, the majority element is the element that appears more than n/2 times.
// You may assume that the majority element always exists.

// 💡 Idea (Boyer-Moore Voting Algorithm)

// Initialize candidate and count = 0

// Traverse array:

// If count == 0 → candidate = nums[i]

// If nums[i] == candidate → count++

// Else → count--

// candidate at the end is the majority element


// ⏱ Time Complexity

// O(n) → single pass

// 📦 Space Complexity

// O(1) → constant space


// Input:  [2,2,1,1,1,2,2]
// Output: 2
// Explanation: 2 appears 4 times (> 7/2)



//LEETCODE-169  
// int majorityElement(int* nums, int numsSize) {
//     int candidate = 0;
//     int count = 0;

//     for (int i = 0; i < numsSize; i++) {
//         if (count == 0) {
//             candidate = nums[i];
//             count = 1;
//         } else if (nums[i] == candidate) {
//             count++;
//         } else {
//             count--;
//         }
//     }

//     return candidate;
// }
