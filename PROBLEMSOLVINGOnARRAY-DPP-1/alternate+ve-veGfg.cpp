#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0, p = 0, ne = 0;

    // Alternate placement
    while (p < pos.size() && ne < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[ne++];
    }

    // Remaining positives
    while (p < pos.size())
        arr[i++] = pos[p++];

    // Remaining negatives
    while (ne < neg.size())
        arr[i++] = neg[ne++];
}

int main() {
    int arr[] = {1, -2, 3, -4, -1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}


// ✅ Alternate Positive and Negative Numbers

// GFG – C++ (for VS Code)

// 🔍 Problem Statement

// Given an array of positive and negative numbers, rearrange them so that positive and negative numbers appear alternately.
// If extra elements remain, append them at the end.

// 💡 Simple Idea

// Pehle positive aur negative numbers ko alag-alag store karo

// Phir dono ko alternate manner me array me daal do


// ⏱ Time Complexity

// O(n) → single traversal + rearrangement

// 📦 Space Complexity

// O(n) → extra vectors used

// Input:  1 -2 3 -4 -1 6
// Output: 1 -2 3 -4 6 -1
