//2. Write a program to take an integer x as input and print the result of ++x, x++, and the final value of x. 

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter an integer:" << endl;
    cin >> x;

    cout << "Result of ++x: " << ++x << endl; // Pre-increment
    cout << "Result of x++: " << x++ << endl; // Post-increment
    cout << "Final value of x: " << x << endl; // Final value after both increments

    return 0;
}