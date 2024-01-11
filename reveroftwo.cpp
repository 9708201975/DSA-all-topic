#include<iostream>
using namespace std;
void rversealternative(int arr[],int n) {
    for(int i=0;i<=n;i+=2) {
        swap(arr[i],arr[i+1]);
    }
}


void printArray(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int even[6]={4,8,7,3,1,5};
   rversealternative(even,6);
   printArray(even,6);
    
}