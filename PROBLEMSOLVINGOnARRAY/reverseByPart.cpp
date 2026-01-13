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

    display(v);
    cout<<endl<<"--------------"<<endl;
    reverseByPart(2,4,v);

    display(v);
}


