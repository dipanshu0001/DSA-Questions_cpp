#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void insert(vector<int> &v,int val ){
    v.push_back(val);
    cout<<v.size();
    int i=v.size()-1;
    int j=i/2;
    while(j>0 and val>=v[j]){
        // swap()
        v[i]=v[j];
        i=j;
        j/=2;
    }
    v[i]=val;
}
void create(vector<int> &v,int val){
      v.push_back(val);
      int i=v.size()-1;
      int j=i/2;
      while(j>0 and val>=v[j]){
          v[i]=v[j];
          i=j;
          j/=2;
      }
      v[i]=val;
}
///// we can delte only the root elment in heap
void delete_from_heap(vector<int> &v){
    v[1]=v[v.size()-1];
    v.erase(v.begin()+v.size()-1);
    int i=1;
    int lchild=2*i;
    int rchild=2*i+1;
    while(i<v.size() and (v[i]<v[lchild] or v[i]<v[rchild]) ){
        lchild=2*i;
        rchild=2*i+1;
        if(v[lchild]>v[rchild]){
            int temp=v[i];
            v[i]=v[lchild];
            v[lchild]=temp;
            i=lchild;
        }
        else{
            int temp=v[i];
            v[i]=v[rchild];
            v[rchild]=temp;
            i=rchild;
        }
    }
    // cout<<v.size()<<" \n";

}
int main(){

int n;
cin>>n;
vector<int> v(n+1);
vector<int> v1(2);
v1[1]=10;
for(int i=2;i<n+1;i++){
    int h;cin>>h;
    create(v1,h);
    // v.push_back(h);
    // cin>>v[i];
}

// insert(v,60);
// cout<<v[1];
for(int i=1;i<v1.size();i++){
    // int h;cin>>h;
    // v.push_back(h);
    cout<<v1[i]<<" ";
}cout<<endl;
delete_from_heap(v1);
delete_from_heap(v1);
delete_from_heap(v1);
delete_from_heap(v1);
delete_from_heap(v1);
delete_from_heap(v1);
// cout<<v1.capacity();
for(int i=1;i<v1.size();i++){
    // int h;cin>>h;
    // v.push_back(h);
    cout<<v1[i]<<" ";
}
return 0;
}