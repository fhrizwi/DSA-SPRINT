// 17. Write a program to input two integers a and b and print:
// • (a * b) % 10
// • (a + b) % 5

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "Result1 = " << (a * b) % 10 << endl;
    cout << "Result2 = " << (a + b) % 5 << endl;
    return 0;
}

// Enter two numbers:5 6
// Result1 = 0
// Result2 = 1