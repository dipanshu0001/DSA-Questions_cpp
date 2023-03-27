#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
inline int add(int a,int b){return (a+b);}
void defualt(int a,int b=5){
    return (a+b);
}
// its more faster than normal function as it is compiled in compile time only it will not go in call stack
int main(){
int a,b;
cin>>a>>b;
cout<< add(a,b);
cout<<default(a);
return 0;
}