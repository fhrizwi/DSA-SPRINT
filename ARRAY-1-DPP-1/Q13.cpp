//Given an array arr. Your task is to find the elements 
//whose value is equal to that of its index value

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 2, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
