#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int get_both(int arr[],int n,int x,int first){
    int low=0,high=n-1,result=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            result=mid;
            if(first){
                high=mid-1;
            }
            else low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}


	int count(int arr[], int n, int x) {
	    // code here
	    int i=get_both(arr,n,x,1);
	    int j=get_both(arr,n,x,0);
	   // cout<<i<<" "<<j<<endl;
	    
	    return i==-1?0:(j-i+1);
	}
int main(){
    int n;
cin>>n;
int v[n];

for(int i=0;i<n;i++) {
    cin>>v[i];
}
int value;
cin>>value;
cout<<count(v,n,value);
return 0;
}