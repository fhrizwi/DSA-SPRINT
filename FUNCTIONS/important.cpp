#include <iostream>
using namespace std;
void func(int x = 5, int y = 6)
{
    cout << x << " " << y;
}
int main()
{
    int a=4;
    int b=8;
    // func(a,b);
    func(a);
}
