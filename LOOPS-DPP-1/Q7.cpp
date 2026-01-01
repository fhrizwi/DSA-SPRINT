//Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 100;

    for (int i = 1; i <= n && a > 0; i++)
    {
        cout << a << endl;
        a = a - 3;
    }

    return 0;
}

