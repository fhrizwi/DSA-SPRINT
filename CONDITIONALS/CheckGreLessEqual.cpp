#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (n > 5)
    {
        cout << "This is greater than 5: " << n;
    }
    else if (n < 5)
    {
        cout << "This is Less than 5: " << n;
    }
    else
    {
        cout << "This is Equal to 5: " << n;
    }
    return 0;
}