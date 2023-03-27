#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int * get_all(int a[],int b[],int n,int m){
    int i=0,j=0,k=0;
    
}
int main(){
int n,m;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
int * p=get_union(a,b,n,m);
return 0;
}