#include<iostream>
using namespace std;

int main() {


int arr[10]={0,1};
       
for(int i=2;i<10;i++) {
 arr[i]=arr[i-2]+arr[i-1];
}
cout<<"fibonaci number are"<<endl;
for(int i=0;i<10;i++) {
cout<<arr[i]<<" ";

}
return 0;
}