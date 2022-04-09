#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void printNextGreaterElement(int arr[],int n){
  // Write your code here
  vector<int> v;
  stack<int> st;
  int i=n-1;int j=0;int k	=0;
  while(i>=0){
    if(i==n-1){v[j]=-1;j++;i--;}
    else{
      k=i+1;
      st.push(arr[k]);
      if(st.top()>arr[i]){v[j++]=st.top();}
      else if(st.top()<arr[i]||st.empty()){v[j++]=-1;}
      i--;
    }
    }
  j=0;
  while(j<10){cout<<v[j++]<<" ";}
  }
  	
  
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
      cin>>arr[i];
    printNextGreaterElement(arr,n);
    cout<<endl;
  }
  return 0;
}