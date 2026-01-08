#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // searching code
    int x;
    cout << "enter the element you want to search: ";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            flag = true;
    }
    if (flag == true)
        cout << "element found";
    else
        cout << "element not found";
}