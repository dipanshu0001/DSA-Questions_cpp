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
void level_print(struct Node* head){
    queue<struct Node*>q;
    q.push(head);
    q.push(NULL);
    while(!q.empty()){
        struct Node* j=q.front();
        q.pop();
        if(j!=NULL){
            cout<<j->data<<" ";
            if(j->left!=NULL)
            {
                q.push(j->left);

            }
            if(j->right!=NULL)
            {
                q.push(j->right);

            }
        }
        else if(j==NULL and !q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
struct Node* h=new Node(1);
h->left=new Node(2);
h->right=new Node(3);
h->left->left=new Node(4);
h->left->right=new Node(5);
h->right->left=new Node(6);
h->right->right=new Node(7);
level_print(h);
return 0;
}