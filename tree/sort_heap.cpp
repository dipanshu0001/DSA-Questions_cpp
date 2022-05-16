#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void insert(vector<int> &v,int val){
    
    v.push_back(val);
    int i=v.size()-1;
    int j=i/2;
    while(j>0 and val>v[j]){
        v[i]=v[j];
        i=j;
        j/=2;
    }
    v[i]=val;
}
void delete_in_heap(vector<int> &v,int index){
    // v[index]=v[1];
    int temp=v[1];
    int i=1;
    v[i]=v[index];
    int left=2*i;
    while(left<index-1){
        if(v[left+1]>v[left]){
            left=left+1;
        }
        if(v[i]<v[left]){
            swap(v[i],v[left]);
            i=left;
            left=left*2;
        }
        else break;
    }
    v[index]=temp;
}
/// this delete will pgive sorted array in place no extra space is being used so but time is nlogn fastest sorting time as best is nlogn

int main(){
    int n;
    cin>>n;
    vector<int> v(2);
    // v.push_back(10);
    v[1]=10;
for(int i=2;i<n+2;i++){
    int h;cin>>h;
insert(v,h);
}
for(int i=n+1;i>0;i--){
delete_in_heap(v,i);
// delete_in_heap(v,5);

}

cout<<v[6]<<endl;
for(int i=1;i<n+2;i++){cout<<v[i]<<" ";}
return 0;
}