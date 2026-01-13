#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter numbers: ";
    cin >> n;

    vector<int> v(n), rev(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Reverse using extra vector
    for (int i = 0; i < n; i++) {
        rev[i] = v[n - 1 - i];
    }

    // Output
    for (int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }

    return 0;
}
