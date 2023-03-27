#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void get_sorted(int arr[],int n){
    int min_ele=INT_MAX;
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        min_ele=min(arr[i],min_ele);
        max_ele=max(arr[i],max_ele);
    }
    int range=max_ele-min_ele+1;
    vector<int> sorted_count(range,0);
    for(int i=0;i<n;i++){
        int index=arr[i]-min_ele;
        sorted_count[index]+=1;
    }
    int k=0;
    for(int i=0;i<range;i++){
        for(int j=0;j<sorted_count[i];j++){
            arr[k++]=(i+min_ele);
        }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}
// ONLY EFFECTIVE WHEN MIN AND MAX ELEMENT RANGE IS SMALL
for(int i=0;i<n;i++){cout<<arr[i]<<" ";}cout<<endl;
get_sorted(arr,n);
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
return 0;
}