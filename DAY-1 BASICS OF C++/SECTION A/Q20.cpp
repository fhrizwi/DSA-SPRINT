// 20. Write a program to input three integers a, b, c and print the value of the expression:
// a + b * c - (++b)

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter three integers:";
    cin >> a >> b >> c;
    cout << "the value of the expression: " << a + b * c - (++b);
    return 0;
}

//Enter three integers:2 4 6
//the value of the expression: 21