#include<iostream>
using namespace std;
int main() {
    int n,i=1;
    cin>>n;

    while (i<=n)
    {
        int j=1;
        //int count=i;
        while (j<=i)
        {
           
        cout<< i-j+1<<" ";/* code */
       // count++;
        j++;
        }
        cout<<endl;
        /* code */
        i++;
    }
    return 0;
    
}