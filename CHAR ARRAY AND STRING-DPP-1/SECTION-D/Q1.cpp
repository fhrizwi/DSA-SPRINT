/*
1. Take a character array as input and check whether it is a **palindrome**.
    - Example: `madam`, `level`
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter to check palidrome character or not: ";
    cin.getline(ch, 100);

    int len = 0;

    // Find length of character array
    while(ch[len] != '\0'){
        len++;
    }

    int i = 0;
    int j = len - 1;
    bool flag = true;

    // Check palindrome
    while(i < j){
        if(ch[i] != ch[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}