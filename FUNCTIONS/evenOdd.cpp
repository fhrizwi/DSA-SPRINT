#include <iostream>
using namespace std;
bool isEven(int a) // Parameters
{
    if (a % 2 == 0)
        return true;
    return false;
}
int main()
{
    cout << isEven(6);
}
