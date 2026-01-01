// Take input integers a, d, n, and print the first n terms of AP starting from a.

#include <iostream>
using namespace std;

int main()
{
    int a, d, n;
    cout << "Enter first term (a), common difference (d), and number of terms (n): ";
    cin >> a >> d >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + d;
    }

    return 0;
}
