#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* next;
};
void create(node* &head,int val){
    node* new_node=new node();
    new_node->data=val;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;return;
    }
    node* temp=head;
    while(temp->next!=NULL){temp=temp->next;}
    temp->next=new_node;


}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
head=head->next;    }
    
    cout<<"NULL";

}
void reverse_LL1(node* head,int n){
    node* p=head;int arr[n];int i=0;
    while(p!=NULL){
        arr[i]=p->data;
        p=p->next;i++;


    }
    p=head;
    
    while(p!=NULL){
        p->data=arr[i];
        p=p->next;i--;

    }
}
void rev_LL2(node* &head){
    node* first=NULL;
    node* second=head;
    node* third;
    while (second!=NULL){
        third=second->next;
        second->next=first;
        first=second;
        second=third;
    }
    head=first;
    
    
}
node* rev_LL3(node* prev,node* &head){
    node* p=head;
    if(p!=NULL){
        rev_LL3(p,p->next);
        p->next=prev;
    }
    else{
        head=prev;
        return prev;
    }
    
}
node*  Reverse3(node *q,node *p)
{
if(p)
{
Reverse3(p,p->next);
p->next=q;
}
else
return q;
}

// void Reverse1( node *p,int n)
// {
// int i=0;
//  node *q=p;
// int A[n];

// // A=(int *)malloc(sizeof(int)*count(p));
// while(q!=NULL)
// {
// A[i]=q->data;
// q=q->next;
// i++;
// }
// q=p;
// i--;
// while(q!=NULL)
// {
// q->data=A[i];
// q=q->next;
// i--;
// }
// }
int main(){
int n;
cin>>n;node* head=NULL;
while(n-->0){
    int m;cin>>m;
    create(head,m);

}
node* h=new node();
node* k=new node();
h->data=1;
h->next=k;
k->data=2;
k->next=NULL;
// display(head);
// reverse_LL1(h,2);
// head=NULL;
// rev_LL2(head);
head=Reverse3(NULL,head);
display(head);

return 0;
}