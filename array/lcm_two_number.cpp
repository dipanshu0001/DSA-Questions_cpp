#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int iterative_lcm(int n1,int n2)
{
    // LCM of two integers a and b is the smallest positive integer that is divisible by both a and b.
    // HCF The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.
    int max_val=max(n1,n2);
    do{
        if(max_val%n1==0 and max_val%n2==0){
            return max_val;
        }
        else ++max_val;

    }while(true);
    return 0;
}
int hcf_rec(int n1,int n2)
{
if(n1==n2)return n1;
if(n1>n2)return hcf_rec(n1-n2,n2);
else return hcf_rec(n1,n2-n1);
}
int hcf_iterative(int n1,int n2){
  int min_val=min(n1,n2);
  for(int i=2;i<=min_val;i++){
    if(n1%i==0 and n2%i==0)return i;
  }
  return 0;
}
int formula(int n1,int n2){
    // lcm*hcf=(n1*n2);

    // int hcf_val=hcf_rec(n1,n2);
  int hcf_val=hcf_iterative(n1,n2);
    return ((n1*n2)/hcf_val);
}

int main(){
int n1,n2;
cin>>n1>>n2;
cout<<iterative_lcm(n1,n2);
cout<<formula(n1,n2);
return 0;
}