#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of square: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


// Enter the size of square: 4
// 1234
// 1234
// 1234
// 1234