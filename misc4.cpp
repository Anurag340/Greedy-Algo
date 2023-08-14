#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int size=sizeof(arr)/sizeof(arr[0]);
	    int i=size-1;
	    int sum=0;
	    while(i>=0){
	        if(sum+arr[i]<=n){
	            sum+=arr[i];
	            count++;
	        }
	        else{
	            i--;
	        }
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}