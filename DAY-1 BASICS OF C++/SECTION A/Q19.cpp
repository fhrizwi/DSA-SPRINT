// 19. Write a program to input a floating number and print it rounded down using type casting (convert to int).

#include <iostream>
using namespace std;

int main()
{
    float a;
    cout << "Enter a floating number: ";
    cin >> a;

    cout << "Rounded down value = " << int(a) << endl;

    return 0;
}


//Enter a floating number:12.5
//12