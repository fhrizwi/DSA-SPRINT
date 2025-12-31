#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    if (n > 0)
    {
        cout << "Absolute value is : " << n << endl;
    }
    else
    {
        cout << "The absolute value is : " << n * (-1);
    }
    return 0;
}