#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insert_data(Node* &head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
};
int sum_all_element(Node* head){
    int sum=0;
    while(head!=NULL){sum += head->data;
    head=head->next;}
    return sum;
}
void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
};

int main()
{int n;
    
    Node *head = NULL;
    Node* k=head;int sum;
    do
    {
        cin >> n;
        if (n != -1)
        {
            
            insert_data(head, n);
            sum=sum_all_element(head);
            

        }
    } while (n != -1);
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    
    cout<<sum;
    

    
    return 0;
}