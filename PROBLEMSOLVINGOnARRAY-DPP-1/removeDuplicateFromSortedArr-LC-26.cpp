#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int j = 1;  // index for next unique element

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j; // number of unique elements
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    cout << "Unique count: " << k << endl;
    cout << "Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}



//  ✅ Remove Duplicates from Sorted Array

// LeetCode – 26 (C++ for VS Code)

// 🔍 Problem Statement

// Given a sorted array, remove the duplicates in-place such that each element appears only once.
// Return the number of unique elements k.

// 💡 Simple Idea (Two Pointer)

// Ek pointer j rakho jo unique position batata hai

// Array traverse karo

// Jab naya element mile (arr[i] != arr[j-1]), use j position par rakh do


// ⏱ Time Complexity

// O(n) → single traversal

// 📦 Space Complexity

// O(1) → in-place, no extra space

// Input:  0 0 1 1 1 2 2 3 3 4
// Output:
// Unique count: 5
// Array: 0 1 2 3 4


//FOR LEETCODE-26
// int removeDuplicates(int* nums, int numsSize) {
//     if (numsSize == 0)
//         return 0;

//     int j = 1;   // index for next unique element

//     for (int i = 1; i < numsSize; i++) {
//         if (nums[i] != nums[j - 1]) {
//             nums[j] = nums[i];
//             j++;
//         }
//     }
//     return j;   // number of unique elements
// }
