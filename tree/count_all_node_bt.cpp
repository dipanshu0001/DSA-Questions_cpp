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
int count(struct Node* root){
    if(root==0)return 0;
    int x=count(root->left);
    int y=count(root->right);
    return(x+y+1);


}
int main(){
struct Node* h=new Node(1);
h->left=new Node(2);
h->right=new Node(3);
h->left->left=new Node(4);
h->left->right=new Node(5);
h->right->left=new Node(6);
h->right->right=new Node(7);
h->left->left->left=new Node(8);
h->left->left->right=new Node(8);
h->right->right->left=new Node(6);
h->right->right->right=new Node(7);
cout<<count(h);
return 0;
}