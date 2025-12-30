// 15. Write a program to input any number and print whether its last digit is even or odd using modulus.
// (Do NOT use if/else → just print the last digit and remainder.)

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int lastDigit = num % 10;
    int remainder = lastDigit % 2;

    cout << "Last digit: " << lastDigit << endl;
    cout << "Remainder when last digit is divided by 2: " << remainder << endl;

    // Note: remainder 0 means even, 1 means odd
    cout << "Interpretation: 0=Even, 1=Odd";

    return 0;
}

//Enter any number: 45
//Last digit: 5
//Remainder when last digit is divided by 2: 1
//Interpretation: 0=Even, 1=Odd
