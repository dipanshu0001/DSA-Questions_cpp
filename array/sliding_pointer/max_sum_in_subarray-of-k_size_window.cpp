#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int max_sum_k_size(int arr[],int n,int k){
    int i=0;int j=0;
    int max_sum=-1;
    int sum=0;
    while(j<n){
        sum+=arr[j];
        if((j-i+1)<k){j++;}
        else if((j-i+1)==k){
            max_sum=max(max_sum,sum);
            sum-=arr[i++];
            // sum+=arr[++j];
            j++;
        }
    }
    return max_sum;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int k;
cin>>k;
cout<<max_sum_k_size(arr,n,k);
return 0;
}