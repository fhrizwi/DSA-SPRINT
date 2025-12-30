// 8. Write a program to input a double value and print its integer part using type casting.

#include <iostream>
using namespace std;
int main()
{
    double a;
    cout << "Enter double value:";
    cin >> a;
    cout << "Integer part = "<< int(a);
    return 0;
}

//Enter double value:12.75
//Integer part = 12