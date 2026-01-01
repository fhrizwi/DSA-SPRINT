//Take input integer n and print “Hello” n times.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Hello"<<endl;
    }

    return 0;
}
