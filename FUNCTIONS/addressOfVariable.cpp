#include <iostream>
using namespace std;
void function(int x, int y)
{
    cout << "Address of x in function variable" << &x << endl;
    cout << "Address of x in function variable" << &y << endl;
}
int main()
{
    int x;
    int y;
    cout << "Address of x in main function variable" << &x << endl;
    cout << "Address of x in main function variable" << &x << endl;
    function(x, y);
}

//sabhi variable ka address different hota hai ....remember