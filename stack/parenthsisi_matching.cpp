#include<iostream>
using namespace std ;
class stack{

public:
int top;
int size;char*s;
stack(int val){
    size=val;top=-1;s=new char[val];
}
void push(char val){
    if(top==size-1)return;
    else{
        s[top++]=val;


    }
}
void pop(){
    if(top==-1){
        return;
    }
    else{top--;
    }

}
bool isempty(){
    if(top==-1)return true;
    return false;
    }


};
bool isbalance(char *exp,int size){
     stack st(size);
     for(int i=0;i<size;i++){
         if(exp[i]=='('){
             st.push(exp[i]);

         }
         else if(exp[i]==')'){
             if(st.top==-1){return false;}
             st.pop();

         }
     }
     if(st.top!=-1){return false;}
     return true;

     
}

int main(){int n;cin>>n;
char arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
char *exp=arr;
int size=n;
cout<<isbalance(exp,size);
// if(b==true)cout<<"true";
// else cout<<"false";
return 0;
}