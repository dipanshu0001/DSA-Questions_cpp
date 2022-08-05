#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int height(struct Node *head)
{
    if (head == NULL)
        return 0;
    int x = height(head->left);
    int y = height(head->right);
    return (max(x, y) + 1);
}

struct Node *rr_roatation(struct Node *j)
{
    struct Node *x = j->left;
    struct Node *x2 = x->right;
    x->right = j;
    j->left = x2;
    return x;
}
struct Node *ll_rotation(struct Node *j)
{
    struct Node *help = j->right;
    struct Node *help2 = help->left;
    help->left = j;
    j->right = help2;
    return help;
}
int balanced(struct Node *head)
{
    if (head == NULL)
        return 0;
    cout << height(head->left) << " " << height(head->right) << endl;
    return (height(head->left) - height(head->right));
}
struct Node *create(struct Node *head, int n)
{
    struct Node *help = new Node(n);

    // binary tree creation
    if (head == NULL)
    {
        return help;
    }
    if (head->data < n)
    {
        head->right = create(head->right, n);
        // head->right=help;
    }
    else if (head->data > n)
    {
        head->left = create(head->left, n);
        // head->left=help;
    }
    ///// balancing of tree start from here

    int h = balanced(head);

    /// for ll-imbalance
    if (h > 1 and head->left->data > n)
    {
        return rr_roatation(head);
    }
    // for rr-imbalance
    else if (h < -1 and head->right->data < n)
    {
        return ll_rotation(head);
    }
    //// for l-r imbalance
    else if (h > 1 and head->left->data < n)
    {

        head->left = ll_rotation(head);
        return rr_roatation(head);
    }
    // for r-l imbalance
    else if (h > 1 and head->right->data > n)
    {
        head->right = rr_roatation(head);
        return ll_rotation(head);
    }
    return head;
}
void preorder(struct Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    preorder(head->left);
    preorder(head->right);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    struct Node *head = NULL;
    // cin>>arr[0];
    // head=create(head,arr[0]);
    for (int i = 0; i < n; i++)
    {
        head = create(head, arr[i]);
    }
    preorder(head);

    return 0;
}