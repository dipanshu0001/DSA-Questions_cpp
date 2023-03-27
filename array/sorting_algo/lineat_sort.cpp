#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int * linear_sort(int *arr,int n){
    int *result=new int[n];
    int k=0;
    
    for(int i=0;i<n;i++){
        int min_ele=INT_MAX,index=0;
        for(int j=0;j<n;j++){
            if(arr[j]<min_ele){
                min_ele=arr[j];
                index=j;
                
            }
        }
        arr[index]=INT_MAX;
        result[k++]=min_ele;
    }
    return result;

}
void print_arr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
int n;
int *arr;
cin>>n;
arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int *result=linear_sort(arr,n);
print_arr(result,n);
return 0;
}