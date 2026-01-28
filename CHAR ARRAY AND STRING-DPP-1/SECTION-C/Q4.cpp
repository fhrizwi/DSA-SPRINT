/*
Write a program to print a character array in reverse order.
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter character array to see reverse of it: ";
    cin.getline(ch, 100);

    int length=0;

    // Find length
    while(ch[length] != '\0'){
        length++;
    }
    // Print in reverse
    cout << "Reverse character array: ";
    for(int i = length - 1; i >= 0; i--){
        cout << ch[i];
    }
    return 0;
}