#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> leaders;
    int maxRight = arr[n - 1];

    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    // Print in original order
    for (int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }

    return 0;
}



// ✅ Leaders in an Array

// GFG – C++ (for VS Code)

// 🔍 Problem Statement

// An element is called a leader if it is greater than or equal to all elements on its right side.
// The rightmost element is always a leader.

// 💡 Simple Idea (Right to Left)

// Array ko right se left traverse karo

// Ek variable maxRight rakho

// Agar current element ≥ maxRight, to wo leader hai

// ⏱ Time Complexity

// O(n) → ek hi traversal

// 📦 Space Complexity

// O(n) → leaders store karne ke liye


// Input:  16 17 4 3 5 2
// Output: 17 5 2
