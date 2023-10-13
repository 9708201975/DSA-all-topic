#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
    int i=1,sum=0;
    do
    {
        sum=sum+i;
        i=i+2;/* code */
    } while (i<n);
    
    cout<<sum<<endl;
    return 0;
    
}