// 10. Write a program to input three marks and print their average as a double value.

#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3;
    cout << "Enter three marks: ";
    cin >> m1 >> m2 >> m3;

    double average = (m1 + m2 + m3) / 3.0;

    cout << "Average marks: " << average;

    return 0;
}

//Enter three marks: 10 20 30
//Average marks: 20