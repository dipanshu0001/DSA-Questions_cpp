#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
struct Node* insert(struct Node* root,int key){
if(root==NULL){
    struct Node* l=new Node(key);
    return l;
}
else if(key<root->data){
root->left=insert(root->left,key);
}
else{
    root->right=insert(root->right,key);
}
return root;

}
void inorder(struct Node* j){
    if(j!=NULL){
        inorder(j->left);
        cout<<j->data<<" ";
        inorder(j->right);
    }
}
int main(){
int n;
cin>>n;
struct Node* root=NULL;
root=insert(root,10);
// for(int i=0;i<n-1;i++){
//     int n1;
//     cin>>n1;
//     insert(root,n1);
// }
insert(root,5);
insert(root,4);
insert(root,6);
insert(root,15);
insert(root,12);
insert(root,16);
inorder(root);

return 0;
}