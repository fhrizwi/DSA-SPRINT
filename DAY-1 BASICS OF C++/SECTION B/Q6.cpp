// 6. Write a program to input temperature in Celsius and convert it to Fahrenheit.
// F = C * 9/5 + 32

// 6. Write a program to input temperature in Celsius and convert it to Fahrenheit.
// F = C * 9/5 + 32

#include <iostream>
using namespace std;

int main()
{
    float C, F;
    cout << "Enter temperature in Celsius: ";
    cin >> C;

    F = C * 9 / 5 + 32;

    cout << "Temperature in Fahrenheit: " << F;
    return 0;
}
