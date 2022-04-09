#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void insert_at_end(array<int,10> a,int val){
for(int i=0;i<10;i++){}
}
int remove(array<int,10> arr,int index){
    int i=0;
    while(i!=index)i++;
    int x=arr[i-1];
    arr[i-1]=0;
    return x;
}
int main(){
    
array<int,10> arr;

int m;
cout<<"upto which size u want to add elements in array\n";
cin>>m;
for(int i=0;i<m;i++){cin>>arr[i];}
cout<<"front most element of array "<<arr.front()<<endl;
cout<<"last most element of array "<<arr.back()<<endl;int i=m+1;
cout<<remove(arr,2);





return 0;
}