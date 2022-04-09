#include<iostream>
#include<bits/stdc++.h>
#define loop(i,a,b)for(int i=a;i<b;i++)
using namespace std ;
void move_neg(int ar[],int n){
int j=0;int i;
loop(i,0,n){
if(ar[i]<0){
if(ar[i]<ar[j]){
    swap(ar[i],ar[j]);
    j++;
}
}
}
}

void move_neg_1(int arr[],int n){
    int l=0;int r=n-1;
    while(l<=r){
        if(arr[l]<0&&arr[r]>0){l++;r--;}
        else if(arr[l]>0&&arr[r]<0){swap(arr[l],arr[r]);l++;r--;}
        else if(arr[l]<0&&arr[r]<0)l++;
        else r--;
    }
}
void print(int ar[],int n){
    int i;
    loop(i,0,n){cout<<ar[i]<<" ";}cout<<endl;
}
int main(){
int n;
cin>>n;int i;
int ar[n];
loop(i,0,n){cin>>ar[i];}
move_neg_1(ar,n);
print(ar,n);


int j;
loop(j,1,n){

if(ar[j]!=ar[j-1]&&ar[j]!=ar[j+1])cout<<ar[j]<<" ";
// if(j==n-1){
//     if(ar[j]!=ar[j-1])cout<<ar[j]<<" ";
// }

}

// cout<<flag<<" ";
return 0;

}