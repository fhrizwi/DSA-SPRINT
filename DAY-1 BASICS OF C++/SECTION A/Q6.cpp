// 6. Write a program to input two numbers and print the remainder when the first number is divided by the second.

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter two numbers:";
    cin >> a >> b;

    cout << "Remainder = " << a % b << endl;
    return 0;
}