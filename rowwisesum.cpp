#include<iostream>
using namespace std;
//print roe wise sum
void printsum(int arr[][4],int row,int coul) {
for(int row=0;row<3;row++) {
int sum=0;
for(int col=0;col<4;col++) {
 sum=sum+arr[row][col];
} 
 cout<<sum<<endl;
}
}
int largestsum(int arr[][4],int row,int coul) {
int maxi=INT32_MIN;
int rowindex=-1;
for(int row=0;row<3;row++) {
int sum=0;
for(int col=0;col<4;col++) {
 sum=sum+arr[row][col];
} 
if(sum>maxi) {
    maxi=sum;
    rowindex=row;
}
//return rowindex;
}
cout<<"maximumm sum is:"<<maxi<<endl;
}
int main() {

int arr[3][4];
cout<<"enter the array element:"<<endl;
for(int i=0;i<3;i++) {
    for(int j=0;j<4;j++) {
        cin>>arr[i][j];
    }
}
cout<<"printed array is:"<<endl;
for(int i=0;i<3;i++) {
    for(int j=0;j<4;j++) {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
printsum(arr,3,4);
cout<<"maximum row index is:"<<endl;
largestsum(arr,3,4);
    return 0;
}