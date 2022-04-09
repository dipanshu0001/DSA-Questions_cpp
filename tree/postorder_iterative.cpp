#include<iostream>
#include<bits/stdc++.h>
#include"binary_tree.cpp"
using namespace std ;
void print_iterative(struct node* h){
    if(h==NULL)return ;
    stack<struct node*> s1;
    stack<struct node*>s2;
    struct node* pointer;
    s1.push(h);
    while(!s1.empty()){
        pointer=s1.top();
        s1.pop();
        s2.push(pointer);
        if(pointer->left!=NULL){s1.push(pointer->left);}
        if( pointer->right!=NULL){s1.push(pointer->right);}
    }
    while(!s2.empty()){
        int h=s2.top()->data;
        s2.pop();
        cout<<h<<" ";
    }
    cout<<endl;
}
void print_using_one_stack(struct node* h){

    stack<struct node*> s;
    struct node* p;
    s.push(h);
    while(!s.empty()){
        p=s.top();
        s.pop();
        while(p->left!=NULL){s.push(p->left);
        p=p->left;}
        while(p->right!=NULL){s.push(p->right);p=p->right;}
        


    }


}
int main(){
struct node* h=NULL;
create(&h);
print_iterative(h);
return 0;
}