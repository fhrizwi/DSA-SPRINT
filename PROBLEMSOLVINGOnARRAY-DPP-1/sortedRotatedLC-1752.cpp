#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n])
            count++;
    }
    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    if (check(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}



// Check if Array Is Sorted and Rotated

// LeetCode – 1752

// 🔍 Problem Statement

// Given an integer array nums, return true if the array is sorted in non-decreasing order and then rotated some number of times (possibly 0).
// Otherwise, return false.

// 💡 Key Observation

// A sorted & rotated array has at most one place where
// nums[i] > nums[i+1]

// If this happens more than once, the array is not valid.

// ✅ Optimal Approach (Single Pass)
// 🔹 Algorithm

// Initialize count = 0

// Traverse the array

// If nums[i] > nums[(i+1) % n], increment count

// If count > 1, return false

// Otherwise, return true



// LeetCode-1752
// #include <stdbool.h>

// bool check(int* nums, int numsSize) {
//     int count = 0;

//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] > nums[(i + 1) % numsSize]) {
//             count++;
//         }
//         if (count > 1) {
//             return false;
//         }
//     }
//     return true;
// }
