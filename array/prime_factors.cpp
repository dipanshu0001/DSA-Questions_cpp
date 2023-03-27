#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// brute ->o(sqrt(n)) and space->o(1)
void get_all_prime_factor(int n){
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    for(int i=3;i<sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2){
        cout<<n<<endl;
    }
}
// time->o(logn) space-> o(1)
// prcomputaution time and space is not counted
void get_all_prime_sieve(int n){
    vector<int> all_prime=get_seive_prime(n);
    
}
int main(){
int n;
cin>>n;
get_all_prime_factor(n);
return 0;
}