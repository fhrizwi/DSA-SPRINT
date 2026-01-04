#include <iostream>
using namespace std;
int a = 5; // global
void func()
{
}
int main()
{
    cout << a<<endl;
    for (int i = 0; i < 5; i++)
        cout << i<<endl;
}
