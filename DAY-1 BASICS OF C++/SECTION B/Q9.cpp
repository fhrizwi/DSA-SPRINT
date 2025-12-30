// 9. Write a program to input any amount of money in rupees and print
// how many 100-rupee notes can be made and how much money remains.

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter total amount in rupees: ";
    cin >> amount;

    int notes = amount / 100;
    int remaining = amount % 100;

    cout << "100-rupee notes: " << notes << endl;
    cout << "Remaining amount: " << remaining << " rupees";

    return 0;
}

//Enter total amount in rupees: 560
//100-rupee notes: 5
//Remaining amount: 60 rupees