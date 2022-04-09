#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void create(struct Node **head, int x)
{struct  Node* head1=*head;


    if (*head == NULL)
    {
        struct Node *j = new Node(x);
        *head = j;
    }
    else
    {
        struct Node *j = new Node(x);
        while ((*head)->next != NULL)
        {
            (*head) = (*head)->next;
        }
        (*head)->next=j;
        *head=head1;
    }

}
int sublist(struct Node* h1,struct Node* h2,int n,int m){
if(n>m)return -1;
struct Node* i=h2;

while(i!=NULL){
    struct Node* k=h1;
    while(k!=NULL){
        if(k->data!=i->data)break;
        else {k=k->next;i=i->next;}
    }
    if(k==NULL)return 1;
    






}
return -1;









};
void print(struct Node* h){
    while(h!=NULL){
        cout<<h->data<<" ->";
        h=h->next;
    }
    cout<<endl;
}

    int main()
    {
        struct Node* h=NULL;
        struct Node* h1=NULL;
        // create(&h,1);
        // create(&h,1);
        // create(&h,1);
        // create(&h,1);
        // create(&h,1);
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int k;cin>>k;
            create(&h,k);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int k;cin>>k;
            create(&h1,k);
        }
        print(h);
        cout<<sublist(h,h1,n,m);
        return 0;
    }