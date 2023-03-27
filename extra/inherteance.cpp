#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class a{
protected:
int l=10;
public:
int f=45;
a(){}

};
class B:public a
{
public:
f=45;
// void print(){
//     cout<<
// }
};
int main(){
B e();
cout<<e.f;
return 0;
}