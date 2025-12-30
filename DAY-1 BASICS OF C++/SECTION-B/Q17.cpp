// 17. Write a program to input two characters and print the ASCII difference between them.

#include <iostream>
using namespace std;

int main()
{
    char ch1, ch2;
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;

    int difference = ch2 - ch1;

    cout << "ASCII difference: " << difference;

    return 0;
}

//Enter first character: B
//Enter second character: b
//ASCII difference: 32