//most important questions

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];   //for input elements printing
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl; //for output element printing
    }
}