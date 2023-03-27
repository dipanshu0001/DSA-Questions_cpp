#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// worst time=>o(N^2)
// BEST TIME=>O(N) ALREADY SORTED ARRAY
void insertion_sort(int *arr,int n){
    // 5 4 3 2 1

    // -> 5 4 3 2 1
    // -> 4 5 3 2 1
    // 4 3 5 2 1
    // 3 4 5 2 1

    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0 and arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
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