#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	   
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	        
	    }
	    sort(v.begin(),v.end());
	    
	    int arr[1000000]={0};
	    
	    for(auto it:v){
	        arr[it]+=1;
	        
	    }
	    int maxi=0;
	    for(auto it:arr){
	        maxi=max(maxi,it);
	    }
	    cout<<n-maxi<<endl;
	}
	return 0;
}