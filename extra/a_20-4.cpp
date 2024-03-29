#include<iostream>
using namespace std ;
long long merge(int arr[],int l,int mid,int h){
    int n1=mid-l+1;
    int n2=h-mid;
    int a[n1],b[n2];long long inv=0;
    for(int i=0;i<n1;i++){a[i]=arr[l+i];}
    for(int i=0;i<n2;i++){b[i]=arr[mid+1+i];}
    int i=0;int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(arr[j]>arr[i]){
            arr[k]=a[i];k++;i++;
        }
        else{
            arr[k]=b[j];
            inv +=n1-i;
            k++;j++;

        }
    }
    while(i<n1){
        arr[k]=a[i];k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];k++;j++;
    }
    return inv;




}
long long mergeSort(int arr[],int l,int h){
    long long inv=0;
     if(l<h){
         
         int mid=(l+h)/2;
         inv +=mergeSort(arr,l,mid);
         inv +=mergeSort(arr,mid+1,h);
         inv +=merge(arr,l,mid,h);


     }
     return inv;
}
int main(){
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// cout<<mergeSort(arr,0,n-1);


////
// brute force
int inv=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){inv++;}

    }

}
 cout<<inv;
return 0;
}