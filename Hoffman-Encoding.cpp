#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

class cmp{
public:
    bool operator()(Node*a ,Node*b){
        return a->data > b->data;
    }
};

void traverse(Node*root,vector<string>&ans,string temp){
    //base case

    if(root->left==NULL && root->right==NULL){
        ans.push_back(temp);
        return;
    }

    traverse(root->left,ans,temp+'0');
    traverse(root->right,ans,temp+'1');
}

int main(){
    
    char arr[6]={'u','b','c','d','e','f'};
    int freq[6]={5,7,29,3,2,1};

    priority_queue<Node*,vector<Node*>,cmp>pq;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

        Node* temp=new Node(freq[i]);

        pq.push(temp);

    }

    while(pq.size()>1){
        Node*l=pq.top();
        pq.pop();

        Node* r=pq.top();
        pq.pop();

        Node* temp=new Node(l->data+r->data);

        temp->left=l;
        temp->right=r;

        pq.push(temp);


    }

    Node* root=pq.top();
    vector<string>ans;
    string temp="";
    traverse(root,ans,temp);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;




}