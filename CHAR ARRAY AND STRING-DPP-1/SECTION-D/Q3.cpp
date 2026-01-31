/*
Input a string of even length and Reverse the first half of the string.
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Input a string of even length to reverse first half of the string: ";
    cin.getline(ch, 100);

    int len = 0;

    // Find length
    while(ch[len] != '\0'){
        len++;
    }

    // Check even length
    if(len % 2 != 0){
        cout << "String length is not even";
        return 0;
    }

    int start = 0;
    int end = (len / 2) - 1;

    // Reverse first half
    while(start < end){
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;

        start++;
        end--;
    }

    cout << "Result: " << ch;

    return 0;
}