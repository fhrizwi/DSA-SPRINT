// 6. Write a program in C++ to find a prime number within a range.

// `Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25`

#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Input number for starting range: ";
    cin >> start;
    cout << "Input number for ending range: ";
    cin >> end;

    int count = 0;

    cout << "The prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++)
    {
        if (num < 2)
            continue;

        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
            count++;
        }
    }

    cout << "\nThe total number of prime numbers between "
         << start << " to " << end << " is: " << count;

    return 0;
}


// Input number for starting range: 1 5
// Input number for ending range: The prime numbers between 1 and 5 are:
// 2 3 5
// The total number of prime numbers between 1 to 5 is: 3