// 1. Write a program to input a 3-digit number and print the sum of its digits.
//(Hint: Extract digits using % and /.)

#include <iostream>
using namespace std;

int main()
{
    int num, sum, digit1, digit2, digit3;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Extract digits
    digit3 = num % 10;        // units place
    digit2 = (num / 10) % 10; // tens place
    digit1 = (num / 100);     // hundreds place

    sum = digit1 + digit2 + digit3;

    cout << "Sum of digits = " << sum << endl;

    return 0;
}


//Enter a 3-digit number: 234
//Sum of digits = 9
//Done