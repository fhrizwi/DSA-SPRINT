#include<iostream>
using namespace std;
int main(){
    // char ch='a';
    // cout<<ch;

    char ch[]={'a','b','c'};
    // cout<<ch<<endl;  //this is not a right way 

    for(int i=0; i<3; i++){         //this is right way
        cout<<ch[i];
    }
}