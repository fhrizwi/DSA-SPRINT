#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int j = 0;  // position for next negative number

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, -1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegatives(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// 🔹 Simple Idea

// Ek pointer j rakho jo negative numbers ki correct position batata hai

// Array traverse karo

// Jab bhi negative number mile, usko j index par swap kar do

// ⏱ Time Complexity: O(n) → array ek baar traverse hota hai
// 📦 Space Complexity : O(1) → extra space use nahi hota