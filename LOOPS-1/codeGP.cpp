#include <iostream>
using namespace std;

int main()
{
    int n;
    int term = 5;   // first term

    cout << "Enter number of terms of Arithmetic Progression: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << term << endl;
        term*= 3;   // common difference
    }

    return 0;
}
