//5. Write a program to input seconds and convert them into hours, minutes, and seconds. 

// 5. Write a program to input seconds and convert them into hours, minutes, and seconds.

#include <iostream>
using namespace std;

int main()
{
    int totalSeconds;
    cout << "Enter seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds;

    return 0;
}
