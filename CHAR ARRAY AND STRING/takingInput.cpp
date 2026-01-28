#include<iostream>
using namespace std;
int main(){
    char ch [10];
    cout<<"Enter the character: ";
    // cin>>ch;       //ye sahi output print nahi dega

    cin.getline(ch,10);        //this is right way
    for (int i=0;i<10; i++){
        cout<<ch[i]<<endl;
    }

}

//sahi output print karne ke liye 
//cin.getline   ka use karna hoga

//aur jab hum input lenge to usme space ka use nhi karenge warrna ye space ko bhi count karega