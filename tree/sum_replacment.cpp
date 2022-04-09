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
 int sum_replacment(struct Node* root){
     if(root==NULL)return 0;
     int x=sum_replacment(root->left);
     int y=sum_replacment(root->right);
     root->data+=(x+y);
     return root->data;
 }
 void pre_order(struct Node* root){
     if(root==NULL)
     {
         return;
     }
     cout<<root->data<<" ";
     pre_order(root->left);
     pre_order(root->right);

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
pre_order(h);cout<<endl;
sum_replacment(h);
pre_order(h);
 return 0;
 }