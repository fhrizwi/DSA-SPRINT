// 1. Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout << "Enter two integers:" << endl;
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    if(b != 0){
        cout << "Quotient: " << a / b << endl;
    } else {
        cout << "Quotient: Division by zero is undefined." << endl;
    }
    return 0;
}