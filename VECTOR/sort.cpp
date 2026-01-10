#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){             
    vector <int> v;      
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    sort(v.begin(),v.end());
    for (int i=0;i,i<v.size(); i++){
    cout<<v[i]<<endl;

    }
}