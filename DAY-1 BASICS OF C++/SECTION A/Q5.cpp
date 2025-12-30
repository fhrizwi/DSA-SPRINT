// 5. Write a program to input an ASCII value (integer) and print the corresponding character.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter an integer to find ASCII character:";
    cin >> a;

    cout << "ASCII character of " << a << " is" <<endl << char(a);
    return 0;
}