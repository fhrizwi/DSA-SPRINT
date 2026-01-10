#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change (vector<int> &a){
    a[0]=100;
}
int main(){             
    vector <int> v;      
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    for (int i=0;i,i<v.size(); i++){
    cout<<v[i]<<endl;

    }

    change (v);
    for (int i=0;i,i<v.size(); i++){
    cout<<v[i]<<endl;
    }
}