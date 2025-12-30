// 3. Write a program to input two integers a and b and print:
// • a % b
// • b % a

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter two integers:";
    cin >> a;
    cin >> b;
    cout << "a%b=" << a % b << endl;
    cout << "b%a=" << b % a;

    return 0;
}

//Enter two integers:2 3
//a%b=2
//b%a=1

//Enter two integers:3 2
//a%b=1
//b%a=2