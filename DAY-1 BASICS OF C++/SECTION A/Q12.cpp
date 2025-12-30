// 12. Write a program to input an integer and print:
// • value before post-increment (x++)
// • value after post-increment
// • value after pre-increment (++x)

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter an integer:";
    cin >> x;
    cout << " value before post-increment(x++): " << x++ << endl;
    cout << " value after post-increment: " << x << endl;
    cout << " value after pre-increment(++x): " << ++x << endl;

    return 0;
}

//Enter an integer:6
//value before post-increment(x++): 6
//value after post-increment: 7
//value after pre-increment(++x): 8