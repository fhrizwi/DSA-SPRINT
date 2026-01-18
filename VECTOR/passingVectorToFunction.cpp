#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change (vector<int> &a){  //pass by value and pass by reference kya hota haihanges karega
    a[0]=100;                   //vector ke case me ye & symbol use hota hai okkk
                                //ye & sybol pass by reference hai means original me c
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