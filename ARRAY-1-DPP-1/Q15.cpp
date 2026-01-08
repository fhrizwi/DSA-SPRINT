//Given an array arr, 
//the task is to find whether the arr is palindrome or not.
//If the arr is palindrome then return true else return false.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "true";
    else
        cout << "false";

    return 0;
}
