#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bst
{
public:
    int data;
    bst *left;
    bst *right;
    bst() {}
    bst(int data)
    {
        this->data = data;
        left = right = NULL;
    }
    bst *create_bst(bst *head, int val);
    bst *delete_in_bst(bst *head, int val);
};
bst *bst::create_bst(bst *head, int val)
{
    // cout<<head<<" "<<endl;
    if (head == NULL)
    {
        bst *k = new bst(val);
        return k;
    }
    if (head->data > val)
    {
        head->left = create_bst(head->left, val);
    }
    else
    {
        head->right = create_bst(head->right, val);
    }
    return head;
}
int height(bst *head)
{
    int x, y;
    if (head == NULL)
        return 0;
    x = height(head->left);
    y = height(head->right);
    if (x > y)
        return x + 1;
    else
    {
        return y + 1;
    }
}
bst *in_sucess(bst *head)
{
    while (head->left)
    {
        head = head->left;
    }
    return head;
}
bst *in_pre(bst *head)
{
    while (head->right != NULL)
    {
        head = head->right;
    }
    return head;
}
bst *bst::delete_in_bst(bst *head, int val)
{
    if (head->left == NULL && head->right == NULL)
    {
        free(head);
        return NULL;
    }
    if (val < head->data)
    {
        head->left = delete_in_bst(head->left, val);
    }
    else if (val > head->data)
    {
        head->right = delete_in_bst(head->right, val);
    }
    else
    {
        //// we need to shit the tree with large height as diamtere of tree will reduce 4 
        if (height(head->right) > height(head->left))
        {
            bst *q = in_sucess(head->right);
            head->data = q->data;
            head->right = delete_in_bst(head->right, q->data);
        }
        else
        {
            bst *q = in_pre(head->left);
            head->data = q->data;
            head->left = delete_in_bst(head->left, q->data);
        }
    }
    return head;
}
void inorder(bst *j)
{
    if (j != NULL)
    {
        inorder(j->left);
        cout << j->data << " ";
        inorder(j->right);
    }
}
void pre_order(bst*head){
    if(head==NULL)return;
    else{
        cout<<head->data<<" ";
        pre_order(head->left);
        pre_order(head->right);
    }
}
int main()
{
    bst root;
    bst *root1 = NULL;
    root1 = root.create_bst(root1, 50);
    root.create_bst(root1, 10);
    root.create_bst(root1, 40);
    root.create_bst(root1, 20);
    root.create_bst(root1, 30);
    // root.create_bst(root1, 12);
    // root.create_bst(root1, 16);
    // root->create_bst(root1,48);
    inorder(root1);
    cout << endl;
    pre_order(root1);cout<<endl;
    root1 = root.delete_in_bst(root1, 40);
    inorder(root1);
    cout << endl;
    pre_order(root1);cout<<endl;


    return 0;
}