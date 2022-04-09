#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data;
    struct node* left;struct node* right;
    node(int x){data=x;left=right=NULL;}
};
int serach(int inorder[],int curr,int s,int n){
    for(int i=s;i<=n;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
int lrh(struct node* root){
    if(root=NULL)return 0;
    int x=lrh(root->left);
    if(x==-1)return -1;
    int y=lrh(root->right);
    if(y==-1)return -1;
    if(abs(x-y)>1)return -1;
    return 1+max(x,y);

}
bool check(struct node* root){
    if(lrh(root)==-1)return false;
    return true;
}
struct node* pre_inorder_to_bt(int pre[],int inorder[],int s,int e){
static int index=0;
if(s>e){
    return NULL;
}
int curr=pre[index];
struct node* root= new node(curr);
index++;
int pos=serach(inorder,curr,s,e);
root->left=pre_inorder_to_bt(pre,inorder,s,pos-1);
root->right=pre_inorder_to_bt(pre,inorder,pos+1,e);
return root;


}

void  inorder_p(struct node* h){
if(h==NULL)return;
inorder_p(h->left);
cout<<h->data<<" ";
inorder_p(h->right);

}
int main(){
int n;
cin>>n;
int pre[n];
int inorder[n];
for(int i=0;i<n;i++){
    cin>>pre[i];
    
}
for(int i=0;i<n;i++){
    cin>>inorder[i];
    
}
int s=0;int e=n-1;
struct node* j=pre_inorder_to_bt(pre,inorder,0,n-1);
inorder_p(j);


return 0;
}