#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void get_all_prime(int n){
    vector<int> v(n+1,1);
    for(int i=2;i*i<=n;i++){
        if(v[i]==1){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }

        }
    }
    for(int i=2;i<n+1;i++){
        if(v[i]==1)cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
get_all_prime(n);

return 0;
}