#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num > 0 && num % 3 == 0 && num % 5 == 0) {
        cout << "The number is divisible by both 3 and 5.";
    } else {
        cout << "The number is NOT divisible by both 3 and 5.";
    }

    return 0;
}


//Enter a positive number: 15
//The number is divisible by both 3 and 5.