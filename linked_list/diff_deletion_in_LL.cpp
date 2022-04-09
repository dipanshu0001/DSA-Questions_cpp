#include <iostream>
#include <stdlib.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node* deleteFirst(Node* head){
    Node* p=head;
    head=head->next;
    free(p);
    return head;
}
void deleteinbetwen(Node* head,int val,int index){
    Node* p=head;
    Node* q=head->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);



}
void reverse_LL2(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next1=head->next;
    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next1;
        next1=next1->next;
    }
    head=prev;
}
void deleteatend(Node* head){
    Node* p=head;
    Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}
void deleteatvalue(Node* head,int val){
    Node* p=head;
    Node* q=head->next;
    while(q->data!=val&&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==val){
        p->next=q->next;
        free(q);

    }
    
}
// void forwardPrint(struct Node* head)
// {
// while(head->next!=NULL){
//   cout<<head->data;
//   head=head->next;
// }
//   cout<<endl;
// }

// void backwardPrint(struct Node* head)
// {
//   int i=0;
//   Node* p=head;
//   while(p->next!=NULL){
//     i++;
//     p=p->next;
//   }
//   while(i>0){
//     cout<<p->data;
//     p=p->next;
//     i--;
//   }
//   cout<<endl;

// }
void display(Node *head)
{
    while (head->next != NULL)
    {
        cout << "->" << head->data;
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *first;
    Node *second;
    Node *third;
    Node *fourth;
    first = new Node();
    third = new Node();
    second = new Node();
    fourth = new Node();
    first->data = 11;
    first->next = second;
    second->data = 1000;
    second->next = third;
    third->data = 2000;
    third->next = fourth;
    fourth->data = 3000;
    fourth->next = NULL;
    cout << "linked list before deletion" << endl;
    display(first);
    cout << "linked list after deletion" << endl;
    // first=deleteFirst(first);
    // deleteinbetwen(first,45,2);
    // deleteatend(first);
    // deleteatvalue(first,1000);
    // display(first);
    // forwardPrint(first);
    // backwardPrint(first);
    reverse_LL2(first);
    display(first);
    

    return 0;
}