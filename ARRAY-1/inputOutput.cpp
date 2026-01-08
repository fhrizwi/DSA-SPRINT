#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 6, 8, 9};
    //cout<<arr[1]<<endl;     //agar mujhe sirf kisi specific index ka value chahiye tab. ye use kr sakte hai
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}