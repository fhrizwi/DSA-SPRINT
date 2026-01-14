#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 1, 0, 1, 1, 0};

    int i = 0;
    int j = v.size() - 1;

    while(i < j){
        if(v[i] == 0){
            i++;
        }
        else if(v[j] == 1){
            j--;
        }
        else{
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    for(int x : v){
        cout << x << " ";
    }
}
