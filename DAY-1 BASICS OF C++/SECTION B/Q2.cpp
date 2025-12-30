//2. Write a program to input a 2-digit number and print the reversed number. 
//(Eg: input 53 → output 35) 

#include <iostream>
using namespace std;

int main() {
    int a, rev;

    cout << "Enter any two digit number: ";
    cin >> a;

    rev = (a % 10) * 10 + (a / 10);

    cout << "The reversed number is: " << rev;

    return 0;
}

//Enter any two digit number: 45
//The reversed number is: 54