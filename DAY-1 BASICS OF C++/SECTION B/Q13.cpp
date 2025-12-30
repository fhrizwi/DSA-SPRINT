// 13. Write a program to input a floating number and print only the fractional part.

#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter a floating number: ";
    cin >> num;

    double fractionalPart = num - (int)num;

    cout << "Fractional part: " << fractionalPart;
    return 0;
}

//Input: 12.56
//Output: 0.56
