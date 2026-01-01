//WAP to print the sum of all the even digits of a given number.
//Sample Input : 4556
//Output: 10

#include <iostream>
using namespace std;

int main()
{
    int n, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        digit = n % 10;      // get last digit
        if (digit % 2 == 0)  // check even digit
        {
            sum = sum + digit;
        }
        n = n / 10;          // remove last digit
    }

    cout << "Sum of even digits: " << sum;

    return 0;
}

//Enter a number: 12345
//Sum of even digits: 6