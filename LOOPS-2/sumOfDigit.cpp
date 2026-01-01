#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Digit: ";
    cin >> n;

    int lastdigit;
    int sum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n /= 10;
    }
    cout << sum << endl;
}