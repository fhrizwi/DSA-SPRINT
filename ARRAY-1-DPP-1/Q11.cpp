//Given an array, predict if the array contains duplicates or not.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool hasDuplicate = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                hasDuplicate = true;
                break;
            }
        }
        if (hasDuplicate)
            break;
    }

    if (hasDuplicate)
        cout << "Array contains duplicate elements";
    else
        cout << "Array does not contain duplicate elements";

    return 0;
}
