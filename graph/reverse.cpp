#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// void reverse(int rev[],int n){
//   int max_value=-1;
//   for(int i=0;i<n;i++){
//     max_value=max(rev[i],max_value);
//   }
//   int m=max_value+1;
//   for(int i=0;i<n;i++){
//     rev[i]+=(rev[n-i-1]%m)*m;
//   }
// }
  void set_s(int rev[],int n)
  {
    int s=0;int e=0;
    // while(s<=e){
    //     while(rev[s]%2==0){s++;}
    //     while(rev[e]%2==1){e--;}
    //     swap(rev[s++],rev[e--]);
    // }
    while(s<n){
      while(rev[s]%2==0)s++;
      e=s+1;
      while(rev[e]%2!=0 and e<n){e++;}
      swap(rev[s],rev[e]);
      s++;
    }
    for(int i=0;i<n;i++){cout<<rev[i]<<" ";}
  }
   
  

int main() {
  std::cout << "Hello World!\n";
  int n;
  cin>>n;
  int rev[n];
  for(int i=0;i<n;i++){cin>>rev[i];}
  set_s(rev,n);
  // for(int i=0;i<15;i++){}
  int arr[2][2]={1,2,3,4};
  
  for(int i=0;i<2;i++){
    for(int j=1;j>=0;j--){
      cout<<arr[i][j];
    }
  }

  return 0;
}