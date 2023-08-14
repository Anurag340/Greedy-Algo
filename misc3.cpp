#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int maxi=0;
	    int first=arr[0];
	    
	    for(int i=n-1;i>=0;i--){
	        int last=arr[i];
	        
	        int sum=first +last;
	        maxi=max(maxi,sum);
	        first=last;
	        
	        
	        
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}