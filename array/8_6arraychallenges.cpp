#include<iostream>
using namespace std;

int main(){
int n;cin>>n;int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         sum=0;
//         for(int k=i;k<=j;k++){
//             // cout<<arr[k]<<" ";
//             sum +=arr[k];


//         }
//         max1=max(max1,sum);
//     }
// }
// cout<<max1<<endl;
///kendis algorthim

// int sum=0;int maxsum=INT8_MAX;
//     for(int i=0;i<n;i++){
//         sum +=arr[i];
//         if(sum<0){
//             sum=0;
//         }
//     }
//     cout<<sum;
// algo(arr1,n1);
// int cum_sum[n+1];
// for (size_t i = 1; i <= n; i++){
//     cum_sum[i]=cum_sum[i-1]+arr[i-1];
// }
// int maxsum=-1;
// for(int i=1;i<=n;i++){
//     int sum=0;
//     for(int j=0;j<i;j++){
//         sum =cum_sum[i]-cum_sum[j];
//         maxsum=max(sum,maxsum);
//     }
// }
cout<<sizeof(arr[0]);
// cout<<maxsum;




return 0;
}