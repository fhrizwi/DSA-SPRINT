//Replace every element by its square and print the updated array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];   // square
    }

    // Print updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
