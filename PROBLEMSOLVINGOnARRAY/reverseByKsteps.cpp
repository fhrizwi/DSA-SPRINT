#include<iostream>
#include<vector>
using namespace std;

void display (vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" "<<endl;
    }
}

void reverseByPart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){             
    vector <int> v;      
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    int n=v.size();
    display(v);

    // int k=2;
    int k=7;
    reverseByPart(0, n-k-1, v);
    reverseByPart(n-k, n-1, v);
    reverseByPart(0, n-1, v);
    cout<<"after reversal-------------"<<endl;
    display(v);
    
}


