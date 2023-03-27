#include<iostream>
using namespace std;
class circular_queue{
    int size;
    int front;
    int back;
    int *arr;
    public:
    circular_queue(int size){
        this->size=size;
        arr=new int[this->size];
        front=-1;
        back=0;
    }
    void push(int value){
        if(front==0 and back==size-1){
            cout<<"queue is full"<<endl;
            return;
        }
        if(front==back+1){
            cout<<"queue is full"<<endl;
            return;
        }
        back=(back++)%size;
        // back=back%size;
        // if(back>size)back=0;
        arr[back]=value;
    }
    bool isEmpty(){
        if(back==-1)return true;
        return false;
    }
    int pop(){
        int h=++front;
        return arr[h%size];
    }

};
int main(){
    circular_queue q(2);
    q.push(45);
    q.push(45);
    q.push(55);
    // q.push(78);
    // q.push(79);
    // q.push(800);
    // q.push(800);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.isEmpty();
    // q.push(789);
    // cout<<q.pop();
    return 0;
}