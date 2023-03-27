#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_largest_subarray_sum(int *arr,int n,int sum){
    int c_sum=0;
    int max_length=0;
    int i=0,j=0;
    while(j<n){
        c_sum+=arr[j];
        if(c_sum<sum)j++;
        else if(c_sum==sum){
            cout<<arr[j]<<" "<<c_sum<<endl;
            max_length=max(max_length,(j-i+1));
            j++;
        }
        else{
            while(c_sum>sum){
                c_sum-=arr[i];
            
            i++;}
            j++;
        }

    }
    return max_length;
}
int main(){
int n,sum;
cin>>n>>sum;
int *arr=new int[n];
for(int i=0;i<n;i++){cin>>arr[i];}
cout<<get_largest_subarray_sum(arr,n,sum);
return 0;
}