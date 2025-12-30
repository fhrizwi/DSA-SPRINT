// 10. Write a program to input a character and print the next character using pre-increment (++).

#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character:";
    cin >> a;
    cout << "The next character is: " << ++a << endl;
    return 0;
}