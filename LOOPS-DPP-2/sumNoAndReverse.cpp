//WAP to print the sum of a given number and its reverse.
//Sample Input : 12
//Sample Output : 33 [12+21]

#include <iostream>
using namespace std;

int main()
{
    int n, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;   // store original number

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    cout << "Sum = " << n + rev;

    return 0;
}
