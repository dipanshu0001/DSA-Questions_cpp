#include <iostream>
using namespace std;
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){

return 0;
}
class node
{
public:
    int data;
    node *next;
};
// void insert_data(node *&head, int val)
// {
//     node *j = new node();
//     j->data = val;
//     node *ptr = head;
//     while (ptr->next != head)
//     {
//         ptr = ptr->next;
//     }
//     ptr->next = j;
//     j->next = head;
// }
void insert_data(node *&head, int val)
{
    node *n = new node();
    n->data = val;
    n->next = NULL;
    if (head == NULL)
    {
        head=n;return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
   
}
int check_loop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if (fast == slow)
            return 1;
        
    }
    return 0;
}
void create_circular_LL(node *&head, int n)
{
    node *temp = head;
    node *new_n;
    int c = 1;
    while (temp->next != NULL)
    {
        if (n == c)
            new_n = temp;
        temp = temp->next;
        c++;
    }
    temp->next = new_n;
}
void display(node *head)
{
    // if(head!=NULL){
    //     cout<<head->data<<"->";
    //     display(head->next);

    // }
    // else{
    // cout<<"NULL"<<endl;
    node *p = head;
    do
    {
        cout << p->data << "->";
        p=p->next;
    } while (p != NULL);
}
int main()

{
    int n;
    node *head = NULL;
    do
    {
        cin >> n;
        if (n != -1)
        {

            insert_data(head, n);
        }
    } while (n != -1);
    // create_circular_LL(head, 4);
    cout<<check_loop(head);    return 0;
}