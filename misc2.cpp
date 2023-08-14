#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[7]={0,1,2,5,10,50,100};
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    int x=6;
	    int count=0;
	    while(arr[x]>0){
	        if(sum+arr[x]<=n){
	            sum+=arr[x];
	            count++;
	        }
	        else{
	            x--;
	            
	        }
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}