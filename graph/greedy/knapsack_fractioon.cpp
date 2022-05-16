#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define vi vector<ll>
#define pii pair<ll,ll>
#define vii vector<pii>
#define f first
#define s second
#define ll long long
bool compare(pii a,pii b){
    double v1=double(a.f)/a.s;
    double v2=double(b.f)/b.s;
    return v1>v2;
}
double max_profit(vii v,ll capicity,int n){
    double max_sum=0;
    for(int i=0;i<n;i++){
        double val=double(v[i].f)/v[i].s;
        cout<<max_sum<< " ";
        if((capicity-v[i].s)>0){
            max_sum+=(val*v[i].s);
            capicity-=v[i].s;
        }
        else if(capicity<v[i].s and capicity>0){
            max_sum+=double(v[i].f*capicity)/v[i].s;
            capicity-=(capicity);
        }
    }
    return max_sum;
}
int main(){
int n;
cin>>n;
vii v(n);
ll i;
loop(i,0,n){
    cin>>v[i].f;
    cin>>v[i].s;
}
// now take input the limit of bag that can be carried at a time
cout<<"ENTER CAPACITY OF BAG THAT IT CAN TAKE AT A TIME"<<endl;
long long cap;
cin>>cap;
sort(v.begin(),v.end(),compare);
// for(int i=0;i<n;i++){
//     cout<<v[i].f<<" "<<v[i].s<<endl;
//     }

double max_profit_with_required_weight=max_profit(v,cap,n);
cout<<max_profit_with_required_weight;

// time complexity of code is nlogn as sorting is used
// space complexity is n as each pair is pushed in vector of size n


return 0;
}