#include<iostream>
using namespace  std;


int main()
{
    
    //create 2d array
    int arr[3][4];
    //taking inpur row wise
   /* for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin>>arr[i][j];
        }
    }*/ 
    //taking inpur coulamn wise
    for(int j=0;j<4;j++) {
        for(int i=0;i<3;i++) {
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
} // namespace  std;
return 0;

}


