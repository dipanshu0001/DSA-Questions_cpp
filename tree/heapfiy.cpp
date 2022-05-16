#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void heap_create(vector<int> &v,int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<n and v[l]>v[largest]){
        largest=l;
    }
    if(r<n and v[r]>v[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(v[i],v[largest]);
        heap_create(v,n,largest);
    }

}
void heapfiy(vector<int> &v,int n){
    for(int i=n/2;i>0;i--){
        heap_create(v,n,i);
    }
}
void display(vector<int> v,int n){
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
int n;
cin>>n;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
heapfiy(v,n);
display(v,n);

return 0;
}