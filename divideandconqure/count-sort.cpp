#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void count_sort(int arr[],int n){
    int min_r=INT_MAX,max_r=INT_MIN;
    for(int i=0;i<n;i++){
        min_r=min(min_r,arr[i]);
        max_r=max(max_r,arr[i]);
    }
    int range=max_r-min_r+1;
  int freq[range];
  fill_n(freq,range,0);
    // int freq[range]={0};
  
    for(int i=0;i<n;i++){
        freq[arr[i]-min_r]++;
    }
    freq[0]--;
    for(int i=1;i<range;i++){
        freq[i]+=freq[i-1];
    }
  for(int i=0;i<range;i++){
        cout<<freq[i]<<" ";
    }
    int final[n];
    for(int i=n-1;i>=0;i--){
        int value=arr[i]-min_r;
        int index=freq[value];
        final[index]=arr[i];
        freq[value]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=final[i];
    }
}
int main(){


    /*0. this can be applied only when diff between numbers are less of range is less btw min and max of array 
    1.Counting sort makes assumptions about the data, for example, it assumes that values are going to be in the range of 0 to 10 or 10 – 99 etc, Some other assumptions counting sort makes are input data will be all real numbers.
    2. Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted. Consider the situation where the input sequence is between range 1 to 10K and the data is 10, 5, 10K, 5K. 
    3. it is stable algo rith now here stable means if to key value pair have same value then that pair sholud come first whose key came first in original array
    4. quick heap sort are not stable other are
    */
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
count_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}