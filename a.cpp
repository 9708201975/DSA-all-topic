#include<iostream>
using namespace std;

int targetarry(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++) {
       // cin>>arr[i];
        if(arr[i]>=10){
            count++;
        }
        
    }
    return count;
}


int main() {
    int arr[4];
   for(int i=0;i<4;i++) {
       cin>>arr[i];
       // cout<<arr[i]<<" ";
    }
    int t=targetarry(arr,4);
    cout<<t<<" ";
    return 0;
}