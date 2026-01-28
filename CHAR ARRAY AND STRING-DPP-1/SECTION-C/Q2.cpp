/*
Write a program to count the length of a character array without using strlen().
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter Character array to know the length: ";
    cin.getline(ch,100);

    int count=0;
    int i=0;
    while(ch[i]!='\0'){
        i++;
        count++;
    }
    cout<<"length of the character array: "<<count;
    return 0;
}