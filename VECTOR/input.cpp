#include<iostream>
#include<vector>
using namespace std;

//agar size de rakha ho to input output aese hoga

// int main(){             
//     vector <int> v(4);
//     for(int i=0; i<4; i++){
//         cout<<"Enter the numbers: ";
//         cin>>v[i];
//     }

//     for(int i=0; i<4; i++){
//         cout<<v[i]<<endl;
//     }
// }

//agar size nahi de rakha ho tab
int main(){             
    vector <int> v;
    for(int i=0; i<4; i++){
        int x;
        cout<<"Enter the numbers: ";
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<4; i++){
        cout<<v[i]<<endl;
    }
}
