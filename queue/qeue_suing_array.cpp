#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class qeue{
    int size;int f;int b;int *arr;
    public:
    qeue(int val){
        size=val;f=b=-1;arr=new int[val];
    }
    void enqeue(int val){
        if(isfull()){cout<<"qeue is full"<<endl;return;}
        else{
            arr[++b]=val;
        }

    }
    int deqeue(){
        if(isempty())return -1;
        else{
            f++;
            return arr[f];
            
        }

    }
    bool isempty(){
        if(b==f)return true;return false;
    }
    bool isfull(){
        if(b==size-1)return true;
        return false;
    }
    int peek(int index){
        for(int i=0;i<size;i++){
            if(i==index){return arr[i];}
        }
        return -1;
    }
    int top(){
        if(!isempty())
        return arr[f+1];
        return -1;
    }
    void display(){
        for(int i=f;i<b;i++){cout<<arr[i]<<" ";}
    }

};
int main(){
    int n;cin>>n;
qeue q(n);int k=0;
for(int i=0;i<n;i++){
cin>>k;
q.enqeue(k);}
cout<<q.deqeue()<<"deqeused value\n ";
cout<<q.deqeue()<<" deqeud value\n";
cout<<q.deqeue()<<"dequed value\n ";
cout<<q.top()<<"top vlalue\n ";
cout<<q.peek(6)<<"peek at that index\n ";
q.display();

return 0;
}