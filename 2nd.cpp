#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int coul) {
    for(int row=0;row<3;row++) {
    for(int col=0;col<4;col++) {
        if(arr[row][col]==target) {
            return 1;
        }
    }
    }
    return 0;
}
//int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 // int arr[3][4]={{11,1,1,2,},{22,22,33,12},{44,55,22,66}};
 int main() {
int arr[3][4];
  for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin>>arr[i][j];
        }
        cout<<endl;
} // namespace  std;
cout<<"enter the element to search:"<<endl;
int target;
cin>>target;
if(isPresent(arr,target,3,4)) {
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;

}



  