//Find the sum of the first n natural numbers. Take n input from the user?

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum;

    return 0;
}

//Enter n: 5
//Sum of first 5 natural numbers = 15