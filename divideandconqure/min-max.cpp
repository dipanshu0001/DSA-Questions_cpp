#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define loop(i,a,b) for(int i=a;i<b;i++)
class ele{
    public:
    int min;
    int max;

};
///// naive approach time=o((n)) space=o(1)
ele min_max_naive(int arr[],int n){
    ele j;
    int min_ele=INT_MAX;
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        min_ele=min(arr[i],min_ele);
        max_ele=max(arr[i],max_ele);
    }
    j.min=min_ele;
    j.max=max_ele;
    return j;
}
/////// divide and conqure  time=o(3*n/2-2)

void min_max_rec(int arr[],int s,int n,int &max,int &min){
    static int min1=INT_MAX;
    static int max1=-1;
    if(s==n){ele j;
        max=arr[s];
        min=arr[s];
    }
    else if(n-s==1){
        // ele j;
        if(arr[s]<arr[n]){
            // ele j;
            max=arr[n];
            min=arr[s];
        }
        else{
            // ele j;/
            max=arr[s];
            min=arr[n];

        }
    }
    else{
        int mid=(s+n)/2;
         min_max_rec(arr,s,mid,max,min);
         min_max_rec(arr,mid+1,n,max1,min1);
         if(max1>max){
             max=max1;
         }
         if(min>min1){
             min=min1;  }
        

    }

}


int main(){
int n;
cin>>n;int i;
int arr[n];
loop(i,0,n){
    cin>>arr[i];
}
ele k=min_max_naive(arr,n);
int max=INT_MIN;
int min=INT_MAX;
min_max_rec(arr,0,n-1,max,min);
cout<<"max-ele->"<<max<<endl;
cout<<"min-ele->"<<min<<endl;

return 0;
}