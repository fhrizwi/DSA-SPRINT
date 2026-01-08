//Print only the negative numbers from the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, -1, 4, -7, 0, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
