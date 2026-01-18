//sum formula method used   

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);
    return 0;
}




// Idea:
// The sum of first n natural numbers (including 0) is:

// Expected Sum = n(n+1)/2
// Expected Sum=2
// n(n+1)​

// Calculate the actual sum of array elements and subtract it from the expected sum.

// Algorithm:

// Let n = nums.length

// Compute expectedSum = n*(n+1)/2

// Compute actualSum by iterating through the array

// Missing number = expectedSum - actualSum

// Example:
// nums = [3, 0, 1]
// n = 3
// Expected sum = 3*4/2 = 6
// Actual sum = 3 + 0 + 1 = 4
// Missing number = 6 - 4 = 2

// Time Complexity: Iterating through the array once → O(n)
// Space Complexity: Uses only constant extra space → O(1)


// YE LEETCODE 268 LOGIC ANSWER HAI
// int missingNumber(int* nums, int numsSize) {
//     int expectedSum = numsSize * (numsSize + 1) / 2;
//     int actualSum = 0;

//     for (int i = 0; i < numsSize; i++) {
//         actualSum += nums[i];
//     }

//     return expectedSum - actualSum;
// }