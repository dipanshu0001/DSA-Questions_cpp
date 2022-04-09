#include<iostream>
using namespace std ;
int sum(int n){
    if(n==0){return 0;}
    int psum=sum(n-1);
    return n+psum;
}
int power(int n,int p){
    if(p==0){return 1;}
    int p1=power(n,p-1);
    return n*p1;

}
int factorial(int n){
    if(n==0)return 1;
    int f=factorial(n-1);
    return n*f;
}
int fib(int n){
    if(n==1||n==2){return 1;}
    if(n==0)return 0;
    int fi=fib(n-1)+fib(n-2);
    return fi;
}
int main(){
int n;cin>>n;
cout<<sum(n);
int p;cin>>p;
cout<<power(n,p)<<endl;
cout<<factorial(n)<<endl;
cout<<fib(n)<<endl;

return 0;
}