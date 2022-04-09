#include<iostream>
using namespace std ;
long long power(long n,int p){
    if(p==0)return 1;
    return power(n,p-1)*n;
}
int main(){
    long n;
    do{
cin>>n;int p;
cin>>p;
cout<<power(n,p);}
while(n!=-1);
return 0;
}