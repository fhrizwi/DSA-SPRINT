//Take input integer n and print numbers from n down to 1.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        cout<<i<<endl;
    }

    return 0;
}
