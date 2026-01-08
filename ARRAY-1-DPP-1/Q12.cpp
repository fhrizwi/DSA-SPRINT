//Find Element Occurring Odd Number of Times

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
        {
            cout << "Element occurring odd number of times: " << arr[i];
            break;
        }
    }

    return 0;
}
