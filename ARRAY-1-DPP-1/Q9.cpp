//Given an array, print all elements divisible by 3 or 5.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 9, 15, 7, 8, 20, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
