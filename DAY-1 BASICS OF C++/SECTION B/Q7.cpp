// 7. Write a program to input the total amount and percentage 
// and find the final discounted value.

#include <iostream>
using namespace std;

int main()
{
    float amount, percent, discount, finalAmount;

    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Enter discount percentage: ";
    cin >> percent;

    discount = (amount * percent) / 100;
    finalAmount = amount - discount;

    cout << "Final amount after discount: " << finalAmount;
    return 0;
}

//(Eg: amount=1000, discount=10 → 900) 