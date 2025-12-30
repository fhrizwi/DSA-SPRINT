// 13. Write a program to input two integers a and b, convert them into double using type casting, and print
// the floating division result.

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter two integers:";
    cin >> a >> b;

    cout << "Floating division result = " << (double)a / (double)b << endl;
    return 0;
}

//Enter two integers:2 3
//Floating division result = 0.666667
