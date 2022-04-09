#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* next;
};
void create(node* &head,int m){
    node* n=new node();
    n->data=m;
    n->next=NULL;
    if(head==NULL){
        head=n;
        // cout<<*head->next<<endl;
        // cout<<*head->data;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;   }
        temp->next=n;
}
void display(node* head){
    if(head!=NULL){
        cout<<head->data<<"->";
        display(head->next);

    }
    else{
    cout<<"NULL"<<endl;
    return;}
}
void remove_adjacent(node* head){
    node* first=head;
    node* second=head->next;
    while(second!=NULL){
        if(first->data==second->data){
            first->next=second->next;
            free(second);
            second=first->next;
        }
        else{
            first=second;
            second=second->next;
        }
    }
}
int main(){
int n;
cin>>n; node* head=NULL;int m;
while(n>0){
   
    node* h=head;
    cin>>m;
    create(head,m);
    n--;
}
    // display(head);
     display(head);
    remove_adjacent(head);
    display(head);

   


return 0;
}