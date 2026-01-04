#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two numbers:";
    cin >> a >> b;

    //1st Method
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b;

    //2nd Method
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}


//but agar mai function banakar krta hu to wo swap nahi hoga .