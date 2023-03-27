#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define loop(i,a,b)for(int i=a;i<b;i++)
void merge_sort(int arr[],int start,int mid,int end){
    int n=mid-start+1;
    int m=end-mid;
    int arr1[n];int arr2[m];
    for(int i=0;i<n;i++){
        arr1[i]=arr[start+i];
    }
    for(int i=0;i<m;i++){
        arr2[i]=arr[mid+i+1];
    }
    int k=start;
    int i=0;int j=0;
    while(i<n&&j<m){
        if(arr2[j]<arr1[i]){
            arr[k++]=arr2[j++];
        }
        else{
            arr[k++]=arr1[i++];
        }
    }
    while(i<n){
        arr[k++]=arr1[i++];
    }
    while(j<m){
        arr[k++]=arr2[j++];
    }

}
void merge_sort1(int arr[],int start,int mid,int end){
    int n=mid-start;
    int m=end-mid+1;
    int secondary[end+1];
    for(int i=0;i<=mid;i++){
        secondary[i]=arr[start+i];
    }
    for(int j=mid+1;j<=end;j++){
        secondary[j]=arr[j];
    }
}
void merge(int arr[],int start,int end){
    if(start<end)
    {
        int mid=(start+end)/2;
        merge(arr,start,mid);
        merge(arr,mid+1,end);
        merge_sort(arr,start,mid,end);
    }
}
int main(){
int n;
cin>>n;
 int arr[n];
 int i;
 loop(i,0,n){cin>>arr[i];}
 merge(arr,0,n-1);
 loop(i,0,n)cout<<arr[i]<<" ";


return 0;
}