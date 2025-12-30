// 11. Write a program to input the radius and print the area of the circle.

#include <iostream>
using namespace std;

int main()
{
    double r, area;
    cout << "Enter radius: ";
    cin >> r;

    area = 3.14 * r * r;

    cout << "Area of circle: " << area;
    return 0;
}

//Enter radius: 5
//Area of circle: 78.5