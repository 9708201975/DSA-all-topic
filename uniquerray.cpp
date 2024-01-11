#include<iostream>
using namespace std;
int uniqueArray(int arr[],int n) { 
    int ans=0;
    for(int i=0;i<n;i++) {
        ans=ans^arr[i];
    }
    return ans;
}

/*void printArray(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}*/
int main() {
    int arr[7]={4,10,2,7,2,4,7};
   int  sum=uniqueArray(arr,7);
    cout<<"unique array is :"<<sum<<" ";
    //printArray(arr,7);
}