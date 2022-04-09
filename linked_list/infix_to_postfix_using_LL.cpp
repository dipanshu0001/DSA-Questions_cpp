#include<iostream>
#include<string.h>
using namespace std ;
class node{
    public:
    char data;
    node*next;
    node(char n){data=n;next=NULL;}
};
class stack{
    public:
    node* top;
    
    void push(char val){
        if(top->next==NULL)return;
        node *nn=new node(val);
        nn->next=top;
        top=nn;
    }
    char pop(){
        if(top==NULL)return -1;
        node *x=top;
        top=top->next;
        free(x);
    }
    bool isempty(){if(top==NULL)return true;return false;}
    char Top(){
        return top->data;
    }
    

};
bool isoperator(char n){
    if(n=='/'||n=='*'||n=='-'||n=='+')return true;return false;
}
int prec(char n){}
char* infixtopos(char const *infix){
    stack st;
    char* postfix=new char[strlen(infix)];
    int i=0;int j=0;
    while(i<strlen(infix)){
        if(!isoperator(infix[i])){
            postfix[j++]=infix[i];
        }
        else{
            if(prec(infix[i])>prec(st.Top())){
                st.push(infix[i]);i++;
            }
            else{
                postfix[j++]=st.pop();
            }

        }

    }
    while(!st.isempty()){
        postfix[j++]=st.pop();
    }
    return postfix;





}

int main(){
char const *infix="a+b+b+c";
cout<<infixtopos(infix);
return 0;
}