#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int area_lrgst(int arr[],int n){int maxarea=-1;
int leftmin=INT_MAX;int rightmin=INT_MAX;int lindex=0;int rindex=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(leftmin>=arr[j]){
                leftmin=arr[j];
                lindex=j;
            }
            

        }
        for(int j=i+1;j<n;j++){
            if(rightmin>=arr[j]){
                rightmin=arr[j];
                rindex=j;

            }
        }
        cout<<"left and right of : "<<arr[i]<<" "<<lindex<<" "<<rindex<<endl;
        maxarea=max(maxarea,((rindex-lindex)*arr[i]));

    }
    return maxarea;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<area_lrgst(arr,n);
}
return 0;
}