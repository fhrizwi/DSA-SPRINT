//Print first n’ Fibonacci numbers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}


//Enter n: 10
//0
//1
//1
//2
//3
//5
//8
//13
//21
//34