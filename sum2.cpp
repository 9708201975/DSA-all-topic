//program of sum of even no
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int n;
cout<<"enter the number"<<endl;
cin>>n;
int i=2,sum=0;
do
{
    sum=sum+i;
    i=i+2;
    /* code */
} while (i<n);

cout<<sum<<endl;
return 0;
}