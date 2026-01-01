#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        int digit = n % 10;      // get last digit
        rev = rev * 10 + digit; // add digit to reverse
        n = n / 10;              // remove last digit
    }

    cout << "Reverse of number is: " << rev;

    return 0;
}
