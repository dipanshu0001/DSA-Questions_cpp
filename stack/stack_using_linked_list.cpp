#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* next;
};
class stack{
    int size;
    public:
    node* top;
    
    stack(int size){
        this->size=size;top=NULL;
    }
    void push(int val){
        node* n=new node;
        if(n==NULL)cout<<-1;
        else{
            n->data=val;
            n->next=top;
            top=n;

        }
        
    }
    int pop(){
        if(top->next==NULL){cout<<"end of linked list ";return-1;}
        else{
            int x=top->data;
            top=top->next;
            return x;

        }
    }
    void isempty(){
        if(top==NULL){cout<<"linked is empty";}
    }
    void Top(){
        if(top==NULL){
            cout<<"empty linke d list";
        }
        else{
            cout<<top->data;
        }
    }
    void display(){
        while(top->next!=NULL){cout<<top->data<<"->";top=top->next;}cout<<"NULL\n";
    }
    
};

int main(){
stack st(10);
st.push(1);
st.push(10);
st.push(100);
st.push(1000);
st.push(10000);
st.display();

// cout<<st.pop();
// cout<<st.pop();
// st.display();

return 0;
}