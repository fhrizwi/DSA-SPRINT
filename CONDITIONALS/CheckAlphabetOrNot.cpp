#include <iostream>
using namespace std;

int main()
{
    char n;

    cout << "Enter a character: ";
    cin >> n;

    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
    {
        cout << "This is an alphabet: " << n;
    }
    else
    {
        cout << "This is not an alphabet: " << n;
    }

    return 0;
}
