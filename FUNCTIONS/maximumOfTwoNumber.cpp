#include <iostream>
using namespace std;
int maxNum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout<<maxNum(5, 6);
}
