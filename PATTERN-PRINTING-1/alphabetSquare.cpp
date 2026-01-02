#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}


// Enter size: 4
// A A A A 
// B B B B
// C C C C
// D D D D