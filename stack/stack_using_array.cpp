#include<iostream>
using namespace std ;
class stack{
int size;
int top;
int* s;
public:
stack(int val){
size=val;
top=-1;
s= new int[size];

}
void push(int val){
    if(top==size-1){cout<<"stack is full"<<endl;return;}
    else{top++;
    s[top]=val;

    }
}
int pop(){
if(top==-1)return -1;
else{
    return s[top--];
}

}
bool isempty(){
    return top==-1;
}
void Top(){
    if(top==-1)cout<<-1;
    else{
        cout<<s[top]<<endl;
    }
}
void display(){
    while(top!=-1){
        cout<<s[top--]<<" ";
    }
}

};
int main(){int size;cin>>size;
stack st(size);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
// st.Top();
st.display();

return 0;
}