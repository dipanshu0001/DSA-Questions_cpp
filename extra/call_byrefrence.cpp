#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void add(int a,int b){
   a=a+b;
}
void add_by_ref(int &a,int &b){
    a=a+b;
}
int main(){
int a,b;
cin>>a>>b;
add(a,b);
// add_by_ref(a,b);
cout<<a<<" ";
return 0;
}