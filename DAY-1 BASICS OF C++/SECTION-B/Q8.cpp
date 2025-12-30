// 8. Write a program to input a character and print the next two characters
// in the ASCII sequence.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Next two characters are: "
         << char(ch + 1) << ", " << char(ch + 2);

    return 0;
}

//Enter a character: B
//Next two characters are: C, D