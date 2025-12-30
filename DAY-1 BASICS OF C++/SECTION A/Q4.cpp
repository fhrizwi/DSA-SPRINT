// 4. Write a program to input a character and print its ASCII value.

#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character to find ASCII value: ";
    cin >> a;

    cout << "ASCII value of " << a << " is " << int(a) << endl;

    return 0;
}
