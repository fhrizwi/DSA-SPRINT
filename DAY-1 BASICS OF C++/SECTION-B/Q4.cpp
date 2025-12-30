// 4. Write a program to input total minutes and convert it into hours and minutes.
//(Eg: 130 → 2 hours 10 minutes)

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter minutes:";
    cin >> a;
    int hour = a / 60;
    int minutes = a % 60;
    cout << "hours: " << hour <<endl<< "minutes: " << minutes;
    return 0;
}