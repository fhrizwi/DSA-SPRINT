#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"This is a three digit number: "<<n;
    }
    else{
        cout<<"This is not a three digit number: "<<n;
    }
    return 0;
}

//Enter a number: 66
//This is not a three digit number: 66


//Enter a number: 987
//This is a three digit number: 987