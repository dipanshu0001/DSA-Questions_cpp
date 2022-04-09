#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
/* here k resepresent the level at which we want sum of binary tree where level starts from  0
*/
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
    
};
int sum_kth_level(struct Node* head,int k){
    queue<struct Node*> q;
    q.push(head);
    q.push(NULL);
    int sum=0;
    while(!q.empty() and k>=0){
        struct Node* u=q.front();
        q.pop();
        if(u!=NULL and k>=0){
            if(u->left){
                q.push(u->left);
            }
            if(u->right){
                q.push(u->right);
            }          
        }
        else if(u==NULL and !q.empty())
        {
            k--;
            q.push(NULL);

        }
        
        if(k==0){
            while(!q.empty()){
                if(q.front()!=NULL){
                sum+=q.front()->data;
                cout<<(q.front()->data)<<" ";}
                q.pop();
            }
        }
    }
    return sum;
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


cout<<sum_kth_level(h,3);
return 0;
}