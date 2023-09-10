#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int value[n];
    for(int i=0;i<n;i++){
        cin>>value[i];
    }

    int m;
    cin>>m;
    int weights[m];
    for(int i=0;i<m;i++){
        cin>>weights[i];

    }
    int w;
    cin>>w;

    float profit=0;
    int weight=0;

    for(int i=0;i<n;i++){
        if(weight+weights[i]<=w){
            profit+=value[i];
            weight+=weights[i];
        }
        else{
            int num=w-weight;
            float fraction=num*1.0/weights[i];
            profit+=fraction*value[i];


        }

    }
    cout<<profit<<endl;



}