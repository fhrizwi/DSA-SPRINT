#include <iostream>
using namespace std;
int main(){
    int arr []={2,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxValue=arr[0];

    //traverse
    for(int i=0; i<n; i++){
        if(arr[i]>maxValue){
            maxValue=arr[i];
        }
    }
    cout<<maxValue;

}