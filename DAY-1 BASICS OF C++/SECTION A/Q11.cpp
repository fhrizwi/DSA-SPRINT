// 11. Write a program to input a character and print the previous character using decrement operator.
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character value:";
    cin >> a;
    cout << "The previous character is: " << --a << endl;
    return 0;
}

//Enter a character value:g
//The previous character is: f