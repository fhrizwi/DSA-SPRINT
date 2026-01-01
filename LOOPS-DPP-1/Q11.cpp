//Take input integer n and print all multiples of 3 from 1 to n using a while loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
