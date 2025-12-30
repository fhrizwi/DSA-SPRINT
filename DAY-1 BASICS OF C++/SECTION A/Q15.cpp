// 15. Write a program to input two float numbers and print:
// • sum
// • difference
// • product
// • division

#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    cout << "Enter two float numbers:";
    cin >> a >> b;
    cout << "sum: " << a + b << endl;
    cout << "difference: " << a - b << endl;
    cout << "product: " << a * b << endl;
    cout << "division: " << a / b << endl;
    return 0;
}

//Enter two float numbers:2.3 4.3
//sum: 6.6
//difference: -2
//product: 9.89
//division: 0.534884