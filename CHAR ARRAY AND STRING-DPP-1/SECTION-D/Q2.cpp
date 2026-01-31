/*
2. Write a program to **replace spaces with `@`** in a character array.
    - Input: `Alpha Intern`
    - Output: `Alpha@Intern`
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter words with spaces like-Faizul Haque: ";
    cin.getline(ch, 100);

    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] == ' '){
            ch[i] = '@';
        }
    }

    cout << "After replacing spaces: " << ch;

    return 0;
}