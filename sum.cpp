#include<iostream>
using namespace std;
int sum(int arr[],int n) {
    int som=0;
    for(int i=0;i<n;i++) {
       // som=som+arr[i];
       som=sum(arr,n);
    }
    return som;
}
int main() {
    int arr[4]={5,8,9,6};
    cout<<" sum of arry is: "<<" "<<sum(arr,4);
    return 0;
}