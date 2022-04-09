#include<iostream>
using namespace std ;
class dbl_node{
    public:
    dbl_node* prev;int data;dbl_node* next;
    dbl_node(int val){
        prev=NULL;
        data=val;
        next=NULL;
    }
};
void create_dbl(dbl_node* &head,int val){
    dbl_node* n=new dbl_node(val);
    if(head==NULL){
        head=n;return;
    }
    dbl_node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;


}
dbl_node* insert_start(dbl_node* head,int val){
dbl_node* j=new dbl_node(val);
j->next=head;
head->prev=j;
j->prev=NULL;
return j;
}
dbl_node* delete_start(dbl_node* head){
    dbl_node* p=head;
    head=head->next;
    free(p);
    if(head->prev!=NULL){head->prev=NULL;}
}
void insert_end(dbl_node* head,int bal,int index){
    dbl_node* n=new dbl_node(bal);
    dbl_node* t=head;int i=1;
    while(i<=index){
        t=t->next;i++;
    }
    if(t->next==NULL){
        n->prev=t;
        t->next=n;
        return;
    }
    n->next=t->next;
    t->next->prev=n;
    t->next=n;
    n->prev=t;
    
    cout<<"//////////////";
    cout<<t->prev->data;


}
void display(dbl_node* head){
    cout<<"NULL->";
    while(head!=NULL){cout<<head->data<<"->";head=head->next;}cout<<"NULL";
}
int main(){
int n;dbl_node* head=NULL;
do{
    cin>>n;
    if(n!=-1){create_dbl(head,n);}
}while(n!=-1);
display(head);
head=insert_start(head,45);
display(head);
insert_end(head,4520,5);
display(head);
return 0;
}