#include<iostream>
#include<bits/stdc++.h>
#include"binary_tree.cpp"
using namespace std ;
int count(struct node* root){
    if(root==NULL)return 0;
    int x=count(root->left);
    int y=count(root->right);
    return (1+x+y);
}
int main(){
struct node* root=NULL;
create(&root);
pre_order(root);
cout<<count(root)<<endl;
return 0;
}