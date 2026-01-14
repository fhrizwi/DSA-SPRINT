#include<iostream>
#include<vector>
using namespace std;

int main(){             
    vector<int> v;      
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    int n = v.size();

    // Step 1: count zeros
    int noz = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0)
            noz++;
    }

    // Step 2: fill vector
    for(int i = 0; i < n; i++){
        if(i < noz)
            v[i] = 0;
        else
            v[i] = 1;
    }

    // Print result
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}
