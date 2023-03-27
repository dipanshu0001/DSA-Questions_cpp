#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool canPair(int *arr,int n,int k){
    map<int,int> m;
    if(n&1)return false;
    for(int i=0;i<n;i++){
        m[arr[i]%k]++;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        m[arr[i]%k]--;
        if(m[k-arr[i]%k]>0)
        {
            cnt++;
            m[k-arr[i]%k]--;
        }
    }
    return (n/2==cnt);
}
int main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
cout<<canPair(arr,n,k);
return 0;
}