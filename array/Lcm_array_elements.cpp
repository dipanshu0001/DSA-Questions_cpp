#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hcf(int n1,int n2){
    if(n1==n2)return n1;
    if(n1>n2)return hcf(n1-n2,n2);
    return hcf(n1,n2-n1);
}
int hcf_rec(int arr[],int n)
{
    int result=arr[0];
    for(int i=1;i<n;i++){
        result=hcf(arr[i],result);
        if(result==1)return 1;

    }
    return result;
}
int lcm_arr(int arr[],int n){
//  int hcf=hcf_rec(arr,n);
 int mul=1;
 for(int i=0;i<n;i++){
    mul=(arr[i]*mul)/(hcf(mul,arr[i]));
 }
 return (mul);
}
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcm_arr(arr,n)
    <<endl;
    cout<<hcf_rec(arr,n);
return 0;
}