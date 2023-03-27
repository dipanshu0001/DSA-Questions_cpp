#include <iostream>
using namespace std;
// #include <bits/stdc++.h>
class stack
{

    int top;
    int size;
    char *s;

public:
    stack(int val){
        size=val;top=-1;s=new char[val];
    }
    void push(char val)
    {
        if (top == size - 1)
            return;
        else
        {
            s[top++] = val;
        }
    }
    int  pop()
    {
        if (top == -1)
        {
            return-1;
        }
        else
        {
           return s[top--];
        }
    }
    bool isempty()
    {
        if (top == -1)
            return true;
        return false;
    }
    char Top(){return s[top];}
};
bool isoperator(char infix){
    if(infix=='/'||infix=='+'||infix=='-'||infix=='*')return true;
    return false;
}
int prec(char infix){
    if(infix=='/'||infix=='*'){
        return 2;
    }
    else return 1;
}
char* infixtopos(char *infix)
{
    int length = sizeof(infix) / sizeof(char);
    stack sf(length);
    char*postfix=new char[length];int j=0;
    int i=0;while(i<length){
        if(!isoperator(infix[i])){
            postfix[j++]=infix[i++];

        }
        else{
            if(prec(infix[i])>prec(sf.Top())){
                sf.push(infix[i++]);
            }
            else{
                postfix[j++]=sf.pop();
            }
        }
        while(!sf.isempty()){
            postfix[j++]=sf.pop();
        }
        return postfix;

    }
   

    
}
char* infixtopos2(char* infix){
    int l=sizeof(infix)/sizeof(char);
    stack st(l);int i=0;int j=0;char* postfix=new char[l];
    while(i<l){
        if(!isoperator(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(prec(infix[i])>prec(st.Top())){
                st.push(infix[i]);
                i++;
            }
            else{
                postfix[j++]=st.pop();    
                        }
        }
    }
    while(!st.isempty()){postfix[j++]=st.pop();}return postfix;
}
int main()
{int n;cin>>n;char* infix=new char[n];
for(int i=0;i<n;i++){cin>>infix[i];}
cout<<infixtopos2(infix);


    return 0;
}
// vector<vector<int>> result(5,vector<int>(10,0));