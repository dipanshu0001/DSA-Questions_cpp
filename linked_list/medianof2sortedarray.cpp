#include<iostream>
#include<vector>
void merge(double arr[],int l,int mid,int r){
    int n=mid-l+1;
    int m=r-mid;
    double arr1[n];
    double arr2[m];
    for(int i=0;i<n;i++){arr1[i]=arr[l+i];}
    for(int i=0;i<m;i++){arr2[i]=arr[mid+1+i];}
    int i=0;int j=0;int k=l;
    while(i<n&&j<m){
        if(arr1[i]>arr2[j]){
            arr[k]=arr1[i];i++;k++;
        }
        else{
            arr[k]=arr2[j];j++;k++;
        }
    }
    while(i<n){arr[k]=arr1[i];k++;i++;}
    while(j<m){arr[k]=arr2[j];k++;j++;}
}
void mergesort(double arr[],int l,int r){
    while(l<r){
        int mid=(l+r)/2;
    merge(arr,l,mid,r);
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    }
}
using namespace std ;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        double arr[m+n];
        for(int i=0;i<n;i++){
            arr[i]=nums1[i];
        }
        for(int i=n+1;i<m+n;i++){
            arr[i]=nums2[i];
        }
        mergesort(arr,0,m+n-1);
        int k=(m+n-1)/2;
        return arr[k];
        
        
        
        
    }
int main(){

return 0;
}