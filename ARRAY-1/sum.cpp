#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 7};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}