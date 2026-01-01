// 1. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

// **Sample Output:**
// `Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5`


#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;

    // Euclidean Algorithm
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << "The Greatest Common Divisor is: " << a;

    return 0;
}
