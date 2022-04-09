#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *create(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return head;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
int minnode(node *head)
{
    int min = INT8_MAX;
    while (head != NULL)
    {
        if (min > head->data)
        {
            min = head->data;
            head = head->next;
        }
    }
    return min;
}
int maxnode(node *head)
{
    int max = INT8_MIN;
    while (head != NULL)
    {
        if (max < head->data)
        {
            max = head->data;
            head = head->next;
        }
    }
    return max;
}
void inertfirst(node *&head,int n)
{
   node* j=new node(n);
   j->next=head;
   head=j;return;

}
void inertend(node *&head,int n)
{node* org=head;
node* new_n=new node(n);
    while (org->next != NULL)
    {
        org = org->next;
    }
    org->next=new_n;
    
    
}
node* small_large(node *head)
{
    node *p = head;
    int min = minnode(p);
    node *prev = NULL;
    int max = maxnode(p);
    if(head==NULL){return NULL; }
    else{
        if(head->data==min&&head->next==NULL){

        }
        else{
            node* temp=head;
            while(temp->next!=NULL&&temp->next->data!=min){temp=temp->next;
            } 
            node* rm=temp->next;
            temp->next=temp->next->next;
            free(rm);
            inertfirst(head,min);

            node* temp1=head;
            while(temp1->next!=NULL&&temp1->next->data!=max){temp=temp->next;
            } 
            node* rm1=temp1->next;
            temp1->next=temp1->next->next;
            free(rm1);
            inertend(head,max);



        }
    }
    return head;
}

int main()
{
    // int n;
    // cin>>n;
    node *head1;
    node *head2;
    // while(n-->0){
    //     int i;
    //     cin>>i;
    //     head=NULL;
    //     while(i-->0){
    //         int m;cin>>m;
    //         create(head,m);

    //     }
    //     // display(head);

    // }
    int i;
    cin >> i;
    head1 = NULL;
    while (i-- > 0)
    {
        int m;
        cin >> m;
        head1 = create(head1, m);
    }
    small_large(head1);
    display(head1);
        // cout<<"before shifting"<<endl;

        // display(head1);
        // small_large(head1);
        // cout<<"w=after shifting small and large"<<endl;
        // display(head1);
        // int i1;
        // cin>>i1;
        // head2=NULL;
        // while(i1-->0){
        //     int m;cin>>m;
        //     head2=create(head2,m);

        // }
        // display(head2);
        // node* prev=merge_sorted(head1,head2);
        // display(prev);

        return 0;
}