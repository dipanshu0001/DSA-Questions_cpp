#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        left=right=NULL;
        this->data=data;
    }
    Node(){}
};
void inorder(struct Node* root){
    if (root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
struct Node* inorderbst(struct Node* root,int arr[],int s,int e){
if(s<=e){
    int mid=(s+e)/2;
    // if(root==NULL){
    //     struct Node* h=new Node(arr[mid]);
    //     root=h;
    // }
    // else {
    root=new Node(arr[mid]);
    // if(root==NULL){root=h;}
    root->left=inorderbst(root->left,arr,s,mid-1);
    root->right=inorderbst(root->right,arr,mid+1,e);
    return root;
}
return NULL;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
struct Node* root=NULL;
root=inorderbst(root,arr,0,n-1);
inorder(root);

return 0;
}