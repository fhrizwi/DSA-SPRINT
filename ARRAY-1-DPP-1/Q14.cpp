//Given an array arr of n integers and an index key(0-based index).
//Your task is to return the element present at the index key in the array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;   // 0-based index

    if (key >= 0 && key < n)
    {
        cout << "Element at index " << key << " is: " << arr[key];
    }
    else
    {
        cout << "Invalid index";
    }

    return 0;
}
