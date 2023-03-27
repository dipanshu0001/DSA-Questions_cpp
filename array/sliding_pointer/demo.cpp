#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int> m;
m[0]=1;
map<int,int> j=m;
for(auto itr:j){
    cout<<itr.first<<itr.second;
}
return 0;
}