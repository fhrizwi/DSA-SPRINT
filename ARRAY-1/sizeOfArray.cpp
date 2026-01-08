#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6, 8, 8, 4};
    cout << sizeof(arr) << endl;                  // ye total m/m size bta rha  //ye krne pr int ka size =4 hota hai to ye  7 elements ko 7*4=28 dega
    cout << sizeof(arr[0]) << endl;               // ek single element ka size nikala
    cout << sizeof(arr) / sizeof(arr[0]) << endl; // to ab isse elements kitne hai wo pta chal jayega
}