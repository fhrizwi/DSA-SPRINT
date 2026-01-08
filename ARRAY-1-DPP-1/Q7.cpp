//Given an array, print elements present at even indexes.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
