#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define loop(i,n,r)for(int i=n;i<r;i++)
void rev_print_loop(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[n-i-1]<<" ";cout<<endl;
}
void rev_print_rec(int arr[],int n){
    if(n==0)return;
    
    cout<<arr[n-1]<<" ";
    rev_print_rec(arr,n-1);
}

int main(){
int n;
cin>>n;
int i;int arr[n];
loop(i,0,n){cin>>arr[i];}
rev_print_loop(arr,n);
rev_print_rec(arr,n);
return 0;
}