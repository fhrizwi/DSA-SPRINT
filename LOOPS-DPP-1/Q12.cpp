//Take input integer n and print the factorial of n using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact;

    return 0;
}
