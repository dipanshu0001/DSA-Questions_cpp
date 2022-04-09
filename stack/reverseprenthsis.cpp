#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX_LEN 100000
using namespace std ;
int minReversal(char* expr){
  int l=strlen(expr);
  stack <char> st;
  int i=0;int count=0;
  if(l%2)return -1;
  while(i<l/2){
    if(expr[i]=='['){
      st.push(expr[i]);i++;
      
    }
    else{ count++;i++;}
  }
  i=l/2;
  while(i<=l-1){
    // if(st.empty()){ return -1;break;}
    if(expr[i]==']'){st.pop();i++;}
    else{count++;i++;}
  }
  if(st.empty())count=0;
  return count;
  
  // Write your code here
}
int main(){
int t, ans;
  cin>>t;
  while(t--)
  {
    char *expr=new char[MAX_LEN + 1];
    cin>>expr;
    ans = minReversal(expr);
    cout<<ans<<endl;
  }
return 0;
}