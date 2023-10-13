#include <iostream>
using namespace std;
/*int winner(int arr,int n) {
    int count1=0;
   int  count2=0;
   for(i=0;i<n;i++) {
       i
   }
}*/

int main() {
	// your code goes here
    int n;
	int round[n];
	int p1[n];
	int p2[n];
    cin>>n;
	for(int i=0;i<n;i++) {
	    cin>>round[i];
	    for(int i=0;i<n;i++) {
	        cin>>p1[i];
	    }
	    for(int i=0;i<n;i++) {
	        cin>>p2[i];
	    }
        int result =0;
	if(p1[i]>p2[i]) {
	   cout<<(p1[i]-p2[i])<<" ";
	   result++;
	}
    else
    {
        cout<<p2[i]-p1[i];
    }
	}
	
	//int w=winner(round,100);
	return 0;
}
