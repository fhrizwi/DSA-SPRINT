/*
1. Create a character array of size 50 and take input of a **full sentence** (with spaces) 
    - Print the sentence character by character using a loop and null character condition.
*/

#include<iostream>
using namespace std;
int main(){
    char ch[50];
    cout<<"write a sentence: ";
    cin.getline(ch,50);

    // for(int i=0; i<50; i++){
    //     cout<<ch[i];
    // }

    int i = 0;
    while(ch[i] != '\0'){
        cout << ch[i];
        i++;
    }

    return 0;
}