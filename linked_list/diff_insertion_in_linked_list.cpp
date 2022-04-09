#include<iostream>

using namespace std ;
class Node{
    public:
    int data;
    Node* next;

};
void printList(Node* head){
    while((head)!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
};
//// insertion of node at starting of node
Node* insertfirst(Node* &head,int val){
    Node* n=new Node();
    n->next=head;
    n->data=val;
    return n;
    ///// time complexity is o(1)

}
/////// insertion inbetween the nodes
void insertbetween(Node* &head,int val,int index){
     Node* between=new Node();
     Node* p=head;
     int i=0;
     while(i<index-1){
         p=p->next;
         i++;
     }
     between->data=val;
     between->next=p->next;
     p->next=between;
    //  head=between;

} 
void insertatnode(Node* head,Node* present,int val,int index){
    Node* in =new Node();
    Node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    in->data=val;
    in->next=present;
    p->next=in;

}
void insertend(Node* &head,int val){
    Node* end=new Node();
    Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    end->next=NULL;
    p->next=end;
    end->data=val;

}
int main(){
    Node* first=NULL;
    Node* second=NULL;
    Node* third=NULL;
    first= new Node();
    second= new Node();
    third= new Node();
    first->data=11;
    first->next=second;
    second->data=25;
    second->next=third;
    third->data=15;
    third->next=NULL;
    // Node* four;
    // four=new Node();
    cout<<"Linked list before insertion"<<endl;
        printList(first);

    // first=insertfirst(first,4);
    // insertbetween(first,18,1);

    insertend(first,48530);
    // insertatnode(first,second,4822,1);
    cout<<"linked list after insertion"<<endl;
    printList(first);


return 0;
}