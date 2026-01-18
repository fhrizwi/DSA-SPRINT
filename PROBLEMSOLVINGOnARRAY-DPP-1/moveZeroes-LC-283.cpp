#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; // position for next non-zero element

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}



// ✅ Move Zeroes

// LeetCode – 283 (C++ for VS Code)

// 🔍 Problem Statement

// Given an array nums, move all zeroes to the end while maintaining the relative order of non-zero elements.
// Do this in-place.

// 💡 Idea (Two Pointers / Fast-Slow)

// Pointer j points to position of next non-zero element

// Traverse array with i

// If nums[i] != 0, swap with nums[j] and increment j


// ⏱ Time Complexity

// Single traversal → O(n)

// 📦 Space Complexity

// Constant extra space → O(1)


// Input:  0 1 0 3 12
// Output: 1 3 12 0 0
