#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a,b,c;
	    cin>>x>>a>>b>>c;
	    vector<int>fruits;
	    fruits.push_back(a);
	    fruits.push_back(b);
	    fruits.push_back(c);
	    sort(fruits.begin(),fruits.end());
	    int no=x-1;
	    int sum=0;
	    while(no--){
	        sum+=fruits[0];
	    }
	    sum+=fruits[1];
	    cout<<sum<<endl;
	}
	return 0;
}