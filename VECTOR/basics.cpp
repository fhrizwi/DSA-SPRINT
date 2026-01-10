#include<iostream>
#include<vector>
using namespace std;
int main(){             //syntax
    vector <int> v;      //vector <datatype> anyname;
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    //ye nahi karna hai vector me
    // v[0]=1;//segmentation error dega.this line is wrong ye hum sirf array me hi kar sakte hai yaha pe nahi
    // v[2]=9;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
}