// 16. Write a program to input two numbers and print the result of:
//(a + b) * (a - b)

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout <<"Result = "<< (a + b) * (a - b);
    return 0;
}

//Enter two numbers:2 3
//Result = -5