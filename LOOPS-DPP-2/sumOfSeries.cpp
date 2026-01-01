// Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;   // even term → subtract
        else
            sum = sum + i;   // odd term → add
    }

    cout << "Sum of the series = " << sum;

    return 0;
}
