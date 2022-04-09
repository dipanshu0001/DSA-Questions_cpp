#include<iostream>
#include<bits/stdc++.h>
#include"binary_tree.cpp"
using namespace std ;
int count_node(struct node* j){
    int x,y;
    while(j!=NULL){
        x=count_node(j->left);
        y=count_node(j->right);
        return (x+y+1);


    }
    return 0;
}
int main(){
struct node* h=NULL;
create(&h);
cout<<"\npreorder of binary tree\n";
pre_order(h);
cout<<"\nlevel-order of binary tree\n";
level_order(h);
cout<<count_node(h);


return 0;
}