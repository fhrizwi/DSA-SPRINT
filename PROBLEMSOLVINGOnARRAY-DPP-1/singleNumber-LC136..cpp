#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  // XOR all elements
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums);  // Output: 4
    return 0;
}




// 🔍 Problem Statement

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single element.

// Constraints:

// Must have O(n) time and O(1) extra space.

// 💡 Idea (XOR Trick)

// XOR has these properties:

// a ^ a = 0

// a ^ 0 = a

// XOR all elements → duplicates cancel out → result = single number



// ⏱ Time Complexity

// O(n) → traverse array once

// 📦 Space Complexity

// O(1) → constant extra space


// Input:  [4,1,2,1,2]
// Output: 4



//LEETCODE-136
// int singleNumber(int* nums, int numsSize) {
//     int result = 0;

//     for (int i = 0; i < numsSize; i++) {
//         result ^= nums[i];  // XOR all elements
//     }

//     return result;
// }
