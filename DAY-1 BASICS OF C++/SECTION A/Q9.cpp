// 9. Write a program to input a double value and print only its decimal part.
//(Hint: use (int) to remove integer part)

#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << "Enter a double value: ";
    cin >> a;

    cout << "Decimal part = " << a - int(a) << endl;

    return 0;
}
// Enter a double value: 12.6
// Decimal part = 0.6