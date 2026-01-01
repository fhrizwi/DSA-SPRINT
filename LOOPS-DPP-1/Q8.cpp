//Take input integers a, r, n and print the first n terms of GP.

#include <iostream>
using namespace std;

int main()
{
    int a, r, n;
    cout << "Enter first term (a), common ratio (r), and number of terms (n): ";
    cin >> a >> r >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * r;
    }

    return 0;
}
