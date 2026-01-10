#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();   // removes 6  //remove last element first
    v.pop_back();   // removes 5


    // Print vector elements
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
