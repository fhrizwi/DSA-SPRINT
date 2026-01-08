//Count how many elements are greater than 100.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {50, 120, 90, 200, 30, 150};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 100)
        {
            count++;
        }
    }

    cout << "Number of elements greater than 100: " << count;
    return 0;
}
