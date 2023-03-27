#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Chaining{
    int n;
    Node* *arr;
    public:
    Chaining(int h){
        n=h;
        arr=new Node*[n];
      for(int i=0;i<n;i++){
        arr[i]=NULL;
      }
    }
    int h(int n){
        return n%10;
    }
    void insert_ele( int ele)
    {
        int p=h(ele);
      Node* prev=NULL;
        Node* j=arr[p];
      // cout<<arr[0]<<endl;
        // if(j!=NULL){
        // cout<<j->data<<endl;
          while(j!=NULL)
        {
          prev=j;
            j=j->next;
        }
      if(j==NULL){
        j=new Node(ele);
        if(prev==NULL)
        {
          arr[p]=j;
        }
        else{
          prev->next=j;
        }
        
      }
      else{
        j->data=ele;
      }
          //   j=new Node(ele);
          //   cout<<"J is empty"<<" "<<j->data<<endl;
          //   // return;
          // return ;
    }
    int delete_ele(int ele){
        Node* j=arr[h(ele)];
        Node*prev=NULL;
        if(j->data==ele){
          arr[h(ele)]=j->next;
          return 1;
        }
        // cout<<j->data<<endl;
        while(j!=NULL){
            if(j->data==ele)
            {
                prev->next=j->next;
              return 1;
            }
          prev=j;
            j=j->next;
        }
      return 0;
    }
   int search_ele(int ele)
   {
    // int p=;
     Node* j=arr[h(ele)];
     while(j->next!=NULL)
     {
        if(j->data==ele)return 1;
        j=j->next;
     }
     return -1;
   }
   void display(){
    for(int i=0;i<n;i++){
      // cout<<"Display_strated"<<endl;
        Node* j=arr[i];
        if(j==NULL)continue;
        cout<<i<<" ";
        while(j!=NULL){
            cout<<j->data<<" ";
            j=j->next;
        }
        cout<<endl;
    }
   }
};
int main(){
int n;
cin>>n;
// int arr[n];
Chaining c(10);
for(int i=0;i<n;i++)
{
    int j;
    cin>>j;
    c.insert_ele(j);
}
c.display();
// c.delete_ele(25);

  // c.display();
  int v;
  cin>>v;
  int k=c.search_ele(v);
  // cout<<k<<endl;
  string s=(k==1)?"ELEMENET IS PRESENT":" ELEMENT IS NOT PRESENT";
  cout<<s;




return 0;
}