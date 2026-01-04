#include <iostream>
using namespace std;
void print(string name)
{
    for (int i = 0; i < 5; i++)
        cout << name << endl;
}
int main()
{
    print("Golden");
    print("Faizul");
}