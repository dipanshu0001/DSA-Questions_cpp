#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int get_first_occ(int arr[],int value,int n){

    int low=0,high=n-1;
    int result=0;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==value){
            result=mid;
            high=mid-1;// apne ko toh bass start nikalna toh for sure voh toh left mai hi jayega ager hoga toh nhi toh abhi mid toh hai hi
        }
        else if(arr[mid]>value){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}

int get_last_occ(int arr[],int value,int n){
    int low=0,high=n-1;
    int result=0;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==value){
            result=mid;
            low=mid+1; //apne ko toh last occurence toh voh toh current mid ke baad hi ayegi ager hui toh nhi toh abhi wala mid toh hai hi
        }
        else if(arr[mid]>value){
            high=mid-1;
        }
        else low=mid+1;
    }
    return result;
}

int get_both(int nums[],int target,int first,int n){
        int low=0,high=n-1,result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                result=mid;
                if(first){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
        }
        return result;
    }
vector<int> get_first_last_occ(int arr[],int value,int n){
    vector<int> result(2,-1);
        result[0]=get_both(arr,value,1,n);
        result[1]=get_both(arr,value,0,n);
        return result;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}
int value;
cin>>value;
// cout<<value<<endl;
// cout<<get_first_occ(arr,value,n)<<endl;
// cout<<get_last_occ(arr,value,n)<<endl;
vector<int> result=get_first_last_occ(arr,value,n);
cout<<result[0]<<" "<<result[1];
return 0;
}