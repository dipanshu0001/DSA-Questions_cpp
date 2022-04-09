#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insert_sorted(node *head, int n)
{
    node *k = new node();
    k->data = n;
    k->next;
    node *first = NULL;
    node *second = head;
    while (second != NULL)
    {
        if (second->data < n)
        {
            first = second;
            second = second->next;
        }
        else
        {
            k->next = second;
            first->next = k;
            return;
        }
    }
}
int check_sorted(node* head)
{
    int x = -10000;
    node* p=head;
    while (p != NULL)
    {
        if (x > p->data)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
int isSorted(node *p)
{
int x=-65536;

while(p!=NULL)
{
if(p->data < x)
return 0;
x=p->data;
p=p->next;
}
return 1;
}
void display(node *head)
{
    if (head != NULL)
    {
        cout << head->data << "->";
        display(head->next);
    }
    if (head == NULL)
    {
        cout << "NULL" << endl;
    }
}
int main()
{
    node *n = new node();
    node *m;
    node *j;
    m = new node();
    j = new node();
    // node* n1=NULL;
    n->data = 10;
    n->next = m;
    m->data = 15;
    m->next = j;
    j->data = 20;
    j->next = NULL;
    // insert_sorted(n,11);
    display(n);
    cout << check_sorted(n);

    return 0;
}