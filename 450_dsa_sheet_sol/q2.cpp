#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define loop(i,a,b) for(int i=a;i<b;i++)
vector<int> min_max_ele(int arr[],int n){
    vector<int> v;
int min_ele=arr[0];
int max_ele=arr[0];
int i;
loop(i,1,n){
    if(min_ele>arr[i])
    {
        min_ele=arr[i];
    }
    else if(max_ele<arr[i])max_ele=arr[i];
}
v.push_back(min_ele);
v.push_back(max_ele);
return v;
}
int main(){
int n;
cin>>n;
int arr[n];
int i;
loop(i,0,n){
    cin>>arr[i];
}
vector<int> v = min_max_ele(arr,n);
cout<<v[0]<<endl;
cout<<v[1]<<endl;
return 0;
}