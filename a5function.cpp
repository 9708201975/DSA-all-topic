#include<iostream>
using namespace std;
void printArray(int arr[],int size) {
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}



int main() {
    int a[12]={5,1,5,6,4,6,2,4,6,3,};
    int n=12;
    printArray(a,12);
    int nitish[5]={1,5,3,4,8};
    printArray(nitish,5);
    int nitshsize=sizeof(nitish)/sizeof(int);
    cout<<"size of nitish array is :"<<nitshsize<<endl;
    return 0;
}