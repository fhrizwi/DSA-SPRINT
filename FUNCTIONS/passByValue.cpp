#include<iostream>
#include<vector>
using namespace std;

void change(int x){
    x=10;
}

int main(){
    int a=5;
    cout<<a<<endl;
    change(a);
    cout<<a<<endl;

}

//ye pass by value hua as for example
//jaise hum apne original document ka xerox friend ko diye usne xerox me 
//changes kiya to mere original document pe koi fark nahi pada wo same hi rahega


//agar hame original me changes karna ho to by reference lagana padega joki ye nahi hai