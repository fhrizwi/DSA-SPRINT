#include <iostream>
#include <unordered_map>
using namespace std;

int firstRepeating(int arr[], int n) {
    unordered_map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find first repeating element
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1;  // no repeating element
}

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << firstRepeating(arr, n);
    return 0;
}


// First Repeating Element (GFG)

// C++ (for VS Code)

// 🔍 Problem Statement

// Given an array of integers, find the first element that repeats
// (i.e., whose first occurrence index is minimum).

// 💡 Simple Idea

// Use a map to store frequency

// Traverse array again to find first element with frequency > 1