#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check alphabet first
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // Check vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            cout << "It is a Vowel";
        }
        else
        {
            cout << "It is a Consonant";
        }
    }
    else
    {
        cout << "Not an alphabet";
    }

    return 0;
}
