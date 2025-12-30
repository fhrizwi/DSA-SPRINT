// 3. Write a program to input your age in years and print your age in days.
//(Assume 1 year = 365 days)

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age:";
    cin >> a;
    int age = (a * 365);
    cout << "Your age in days are : " << age;
    return 0;
}

//Enter your age:23
//Your age in days are : 8395