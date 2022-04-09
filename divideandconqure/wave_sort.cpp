#include<iostream>
#include<array>
using namespace std ;
void wavesort(int arr[],int n){
    int i=1;
    while(i<n-1){
        if(arr[i]>arr[i-1]){
            swap(arr[i-1],arr[i]);
        }
        if(arr[i]>arr[i+1]&&i<=n-2){
            swap(arr[i],arr[i+1]);
        }
        i +=2;
    }
}
int main(){
int n;cin>>n;int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
wavesort(arr,n);
for(int i=0;i<n;i++){cout<<arr[i]<<" ";};
return 0;
}