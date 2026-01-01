#include <iostream>
using namespace std;

int main()
{
    int n;
    long long a = 0, b = 1, c;

    cout << "Enter n: ";
    cin >> n;

    if (n == 1)
        cout << "Fibonacci number is: 0";
    else if (n == 2)
        cout << "Fibonacci number is: 1";
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Fibonacci number is: " << b;
    }

    return 0;
}
