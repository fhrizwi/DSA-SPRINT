/*
3. Take a character array as input and print:
    - Total number of vowels
    - Total number of consonants
*/

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter character array: ";
    cin.getline(ch, 100);

    int vowels = 0, consonants = 0;

    for(int i=0; ch[i]!='\0'; i++){
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
        {
            // Check vowel
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||
               ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
                vowels++;
        }else
        {
            consonants++;
        }
    }
}
    cout << "Total vowels: " << vowels << endl;
    cout << "Total consonants: " << consonants << endl;

    return 0;
}