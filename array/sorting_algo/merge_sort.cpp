#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 5 4 3 2 1 6-> 5 4 3 --> 2 1 6
// 5 4   --> 3


void divide(int *arr,int n,int low,int high){
    int low=0,high=n-1;
    if(low<high){
        int mid=(low+high)/2;
        divide(arr,low,mid);


    }
}
void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
insertion_sort(arr,n);
print_arr(arr,n);
return 0;
}