//14. Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII 
//subtraction (c - '0').

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character digit: ";
    cin >> c;

    int num = c - '0';

    cout << "Integer value = " << num << endl;

    return 0;
}

//Enter a character digit: 5
//Integer value = 5

//not understand