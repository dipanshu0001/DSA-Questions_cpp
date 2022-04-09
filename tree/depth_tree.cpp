#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int x){data=x;left=right=NULL;}
};
int search(int inorder[],int s,int e,int curr){
    for(int i=s;i<=e;i++){
        if(inorder[i]==curr)return i;
    }
    return -1;
}
struct node* bt(int post[],int inorder[],int s,int e){
    static int index=e;
    int curr=post[index];index--;
    if(s>e)return NULL;
    struct node* root=new node(curr);
    int pos=search(inorder,s,e,curr);
    root->right=bt(post,inorder,pos+1,e);
    root->left=bt(post,inorder,s,pos-1);
    
    return root;
}
void post_order_p(struct node* root){
    if(root==NULL)return;
    post_order_p(root->left);
    cout<<root->data<<" ";
    post_order_p(root->right); 
}
int main(){
int n;
cin>>n;int post[n];int inorder[n];
for(int i=0;i<n;i++)cin>>post[i];
for(int i=0;i<n;i++)cin>>inorder[i];
struct node* root=bt(post,inorder,0,n-1);
post_order_p(root);
return 0;
}