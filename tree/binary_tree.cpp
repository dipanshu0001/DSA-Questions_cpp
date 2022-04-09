#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        right=left=NULL;
    }
};

void create(struct node **root){
    int n;
    cout<<"ENTER the root value\n";
    cin>>n;
    
    struct node* r=new node(n);
    struct node* p=NULL;
    queue<struct node*> q;
    if((*root)==NULL){
        *root=r;
    }
    q.push((*root));
    while(!q.empty()){
        int k;
        p=q.front();
        q.pop();
        cout<<"enter the left value of: "<<p->data<<endl;
        cin>>k;
        if(k!=-1){
            struct node* t=new node(k);
            p->left=t;
            q.push(t);
        }
        k=0;
        cout<<"enter the right value of: "<<p->data<<endl;
        cin>>k;
        if(k!=-1){
            struct node* t=new node(k);
            p->right=t;
            q.push(t);
        }






    }



}
void pre_order(struct node* r){
    if(r==NULL)return;
    cout<<r->data;
    pre_order(r->left);
    pre_order(r->right);
}
void level_order(struct node* r){
    queue<struct node*>q;
    struct node* p;
    q.push(r);
    // struct node* p;

    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<p->data;
                if(p->left!=NULL){
            q.push(p->left);
        }
        if(p->right!=NULL){
            q.push(p->right);
        }

    }
}
int main1(){
    
    struct node* root=NULL;
create(&root);
cout<<"pre_order traversal of tree\n";
pre_order(root);cout<<endl;
cout<<"\tlevel order traversal of tree\n";
level_order(root);
return 0;
}