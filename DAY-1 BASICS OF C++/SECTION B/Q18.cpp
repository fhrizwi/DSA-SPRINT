// 18. Write a program to input a double number, cast it to int, then print:
// • integer part
// • decimal part
// • integer part + decimal part (as double)

#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter a double number: ";
    cin >> num;

    int intPart = (int)num;
    double decimalPart = num - intPart;
    double sum = intPart + decimalPart;

    cout << "Integer part: " << intPart << endl;
    cout << "Decimal part: " << decimalPart << endl;
    cout << "Sum (as double): " << sum << endl;

    return 0;
}


//Enter a double number: 12.5
//Integer part: 12
//Decimal part: 0.5
//Sum (as double): 12.5