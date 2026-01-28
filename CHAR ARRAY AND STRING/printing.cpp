#include<iostream>
using namespace std;
int main(){
    char ch[]={'a','b','c','d','e'};
    for (int i=0; ch[i]!='\0'; i++){  //yaha pe ch[i]!='\0' jabtak nhi hoga tabtak wo print karta rahega jaise hi requirement meet krega then wo loop off ho jayega
        cout<<ch[i]<<" ";
    }
}