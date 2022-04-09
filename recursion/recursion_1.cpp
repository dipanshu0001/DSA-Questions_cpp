#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
 int fib(int n){
     if(n<2)return n;
     return fib(n-1)+fib(n-2);
 }
int main(){
int arr[5];
for(int i=1;i<=5;i++)cin>>arr[i];
// cout<<ans;
for(int i=1;i<=5;i++)
cout<<arr[i]<<" ";
return 0;
}