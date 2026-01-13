#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target num: "<<endl;
    cin>>x;

    vector<int> v;
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;

    cout<<"Enter the element of vector: ";

    for (int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    ///
    for(int i=0; i<v.size()-2; i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<i<<" "<<j;
            }
        }
    }
}


//Enter the target num: 
// 9
// Enter the size of vector:
// 4
// Enter the element of vector: 2
// 7
// 11
// 15
// 0 1

//answer
//index dega ki kaunse index ko sum karne par humara target pura ho ja rha hai