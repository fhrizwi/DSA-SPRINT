#include <iostream>
using namespace std;
int add(int x, int y)      //Parameters
{
    int sum = x + y;
    return sum;
    //is return k baad kuch v logic ya variable declare krunga to uska koi value ya kaam ya execute hoga hi nahi.
}
int main()
{
    int ans=add(5, 7);      //Arguments
    int finalAnswer=ans*4;
    cout<<finalAnswer;
    // cout<<ans;
}


//in this we cant make a storage variable like  int ans=add(5, 7);
// #include <iostream>
// using namespace std;
// void add(int x, int y)      //Parameters
// {
//     int sum = x + y;
//     cout << sum;
// }
// int main()
// {
//     add(5, 7);      //Arguments
// }