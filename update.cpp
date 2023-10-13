#include<iostream>
using namespace std;
void update(int arr[],int n) {
    cout<<"inside the function"<<endl;
    arr[0]={130};
for(int i=0;i<3;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" foing backt to main function"<<" ";
}



int main() {
    int arr[3]={4,8,3};
    update(arr,3);
    for(int i=0;i<3;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}