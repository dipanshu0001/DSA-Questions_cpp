#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class min_max{
    public:
    int min_val;
    int max_val;
};
min_max rec_min_max(int arr[],int s,int e){
    static min_max obj;
    if(s==e){
         min_max h;
         h.min_val=arr[s];
         h.max_val=arr[s];
         return h;
    }
    if(s<e){
        int mid=(s+e)/2;
        min_max a=rec_min_max(arr,s,mid);
        min_max b=rec_min_max(arr,mid+1,e);
        obj.min_val=min(a.min_val,b.min_val);
        obj.max_val=max(a.max_val,b.max_val);
    }
    return obj;
}
#define loop(i,a,b) for(int i=a;i<b;i++)
int main(){
int n;
cin>>n;
int arr[n];
int i;
loop(i,0,n){
    cin>>arr[i];
}
min_max obj=rec_min_max(arr,0,n-1);
cout<<obj.min_val<<" "<<obj.max_val<<" ";
return 0;
}