#include<iostream>
#include<bits/stdc++.h>
#define l(i,a,b)for(int i=a;i<b;i++)
using namespace std ;
int l_search(int arr[],int n,int x){
    if(n==0)return -1;
    else if(arr[n]==x)return 1;
    else l_search(arr,n-1,x);
}
int main(){
int n;
cin>>n;
int arr[n];
int x;
cin>>x;
int i;
l(i,0,n){
cin>>arr[i];
}
cout<<l_search(arr,n,x);
return 0;
}