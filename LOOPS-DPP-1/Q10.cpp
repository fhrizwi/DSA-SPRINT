// Take input integer n and print the sum from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of numbers from 1 to " << n << " is " << sum;

    return 0;
}
