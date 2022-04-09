#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* next;
};
void insert_data(node* head,int val){
    node* n=new node();
    n->data=val;
    n->next=NULL;
    if(head==NULL){head=n;return;}node* temp =head;
    while(temp->next!=NULL){temp=temp->next;}
    temp->next=n;
    


}
int maximum_element(node* head){
    int k=-1;
    while(head->next!=NULL){
        k=max(k,head->data);
        head=head->next;
    }
    return k;
}
int main(){
int n;node* head=NULL;int maxi;
do{
    cin>>n;
    if(n!=-1){
        maxi=maximum_element(head);
        insert_data(head,n);
        
    };
}while(n!=-1);

cout<<maxi;

return 0;
}