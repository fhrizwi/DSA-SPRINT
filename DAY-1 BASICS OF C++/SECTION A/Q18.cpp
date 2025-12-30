//18. Write a program to input an integer and print its ASCII equivalent character if converted using char(x). 

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer (ASCII value): ";
    cin >> x;

    cout << "ASCII equivalent character = " << char(x) << endl;

    return 0;
}

//Enter an integer (ASCII value): 88
//ASCII equivalent character = X