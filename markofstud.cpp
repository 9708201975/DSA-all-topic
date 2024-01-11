#include<iostream>
using namespace std;
int main(){
int sum=0;
int arr[5];
for(int i=0;i<5;i++){
cin>>arr[i];
}
cout<<"mark of student is:"<<endl;
for(int i=0;i<5;i++){
    cout<< arr[i]<<" ";
}
cout<<endl;
int h=arr[0];
for(int i=1;i<5;i++){
    if(arr[i]>h) {
        h=arr[i];
       
    }
    
}
 cout<<"highest element:"<<h<<" ";
cout<<endl;
for(int i=0;i<5;i++) {
    sum=sum+arr[i];
}
cout<<"sum of arry is :"<<sum<<endl;
int avg=sum/2;
cout<<"avg of arry is :"<<avg<<endl;
int temp=0;
for(int i=0;i<10;i++) {
    for(int j=0;j<10;j++) {
        if(arr[i]>arr[i+1]) {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
    cout<<arr[i]<<" ";
}

return 0;
}