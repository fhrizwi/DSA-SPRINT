// 12. Write a program to input two times (hours and minutes separately) 
// and calculate total minutes.

#include <iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    cout << "Enter first time (hours and minutes): ";
    cin >> h1 >> m1;

    cout << "Enter second time (hours and minutes): ";
    cin >> h2 >> m2;

    int totalMinutes = (h1 * 60 + m1) + (h2 * 60 + m2);

    cout << "Total minutes: " << totalMinutes;
    return 0;
}


//Enter first time (hours and minutes): 2 34
//Enter second time (hours and minutes): 3 35
//Total minutes: 369