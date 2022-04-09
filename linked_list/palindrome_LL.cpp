#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void display(node *head)
{
    if (head != NULL)
    {
        cout << head->data << "->";
        display(head->next);
    }
    else
    {
        cout << "NULL" << endl;
        return;
    }
}
// void palindrome_check(node* head){
//     node* prev=NULL;
//     node* curr=head;
//     node* next_n;
//     node* j=NULL;
//     while(curr!=NULL){
//         node* new_n=new node();
//         new_n->data=curr->data;
//         new_n->next=NULL;
//         if(j==NULL){j=new_n;return;
//         }
//         node* temp=j;
//         while(temp!=NULL){temp=temp->next;}
//         temp=new_n;
//         next_n=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next_n;
//     }
//     cout<<j->data<<endl;
//     cout<<prev->data;
// }
void rev(node *&head)
{
    node *first = NULL;
    node *second = head;
    node *third;
    while (second != NULL)
    {
        third = second->next;
        second->next = first;
        first = second;
        second = third;
    }
    head = first;
    cout<<"  this is of rev fumction"<<"value at head next is :"<<head->next->next->data;
    display(head);
}
node *copy_LL(node *head, node *&c)
{
    node *p = head;
    while (p != NULL)
    {
        node *j = new node();
        j->data = p->data;
        j->next = NULL;
        if (c == NULL)
        {
            c = j;
            return c;
        }
        node *temp = c;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = j;
        cout<<"   this is of copyLL function"<<" value head is: "<<c->next->next->data;
        display(c);
        return c;
    }
    
}

int palindrome_check(node *head)
{
    node *c = NULL;
    node *h = head;
    node *prev = NULL;

    node *next_n;
    while (h != NULL)
    {
        c = copy_LL(h, c);
        h = h->next;
    }
    h = head;

    rev(h);
    int flag = 0;
    node *k = h;
    node *l = c;
    while (l != NULL && k != NULL)
    {
        if (k->data == l->data)
        {
            flag = 1;
            k = k->next;
            l = l->next;
        }
        else{
        return 0;}
    }
    // display(h);
    // display(c);
    if (flag == 1)
        return 1;
    
}

void create(node *&head, int m)
{
    node *n = new node();
    n->data = m;
    n->next = NULL;
    if (head == NULL)
    {
        head = n;
        // cout<<*head->next<<endl;
        // cout<<*head->data;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
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

            create(head, n);
        }
    } while (n != -1);
    int j = palindrome_check(head);
    cout << endl;
    cout << j;

    return 0;
}