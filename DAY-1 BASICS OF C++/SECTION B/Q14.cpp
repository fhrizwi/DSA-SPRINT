// 14. Write a program to input a 4-digit year and print the last two digits.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a 4-digit year: ";
    cin >> year;

    int lastTwoDigits = year % 100;

    cout << "Last two digits: " << lastTwoDigits;
    return 0;
}

//Enter a 4-digit year: 2026
//Last two digits: 26