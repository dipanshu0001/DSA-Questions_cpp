#include<iostream>
#include<bits/stdc++.h>
#define loop(i,a,b)for(int i=a;i<b;i++) 
using namespace std ;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int search(int inorder[],int s,int e,int curr){
    loop(i,s,e+1){
        if(inorder[i]==curr)return i;
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
struct node* build_tree(int preorder[],int inorder[],int s,int e){
    static int index=0;
    if(s>e){return NULL;
    }
    int curr=preorder[index];
    struct node* root= new node(curr);
    if(s==e){return root;
    }
    index++;
    int pos=search(inorder,s,e,curr);
    root->left=build_tree(preorder,inorder,s,pos-1);
    root->right=build_tree(preorder,inorder,pos+1,e);
    return root;






}
void inorder_print(struct node* root){
    if(root==NULL)return;
    inorder_print(root->left);
    cout<<root->data;
    inorder_print(root->right);
}
int main(){
int n;
cin>>n;
int pre[n];int i;
loop(i,0,n){
    cin>>pre[i];
}
int j;int inorder[n];
loop(j,0,n){cin>>inorder[i];}
struct node* h=build_tree(pre,inorder,0,n);
inorder_print(h);
cout<<check(h);


return 0;
}