#include<iostream>
#include<vector>
using namespace std;
int main(){             //syntax
    vector <int> v;      //vector <datatype> anyname;
    v.push_back(8);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"_ _ _ _ _ _ _ _ _"<<endl;

    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"_ _ _ _ _ _ _ _ _"<<endl;

    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"_ _ _ _ _ _ _ _ _"<<endl;

    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}