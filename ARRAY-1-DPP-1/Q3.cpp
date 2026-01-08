// Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 7};
    int prod = 1;
    for (int i = 0; i < 4; i++)
    {
        prod = prod * arr[i];
    }
    cout << prod;
}
