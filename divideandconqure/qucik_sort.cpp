#include<iostream>
using namespace std ;
////// wheen piv from fist position



void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r){
    int piv=arr[l];
    int i=r+1;
    for(int j=r;j>l;j--){
        if(arr[j]>piv){
            i--;
            swap(arr,i,j);
        }

    }
    swap(arr,i-1,l);
    return i-1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition( arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
        
    }
}
int main(){
int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}


return 0;
}