#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> get_done(int n,int *arr){
    map<int,pair<int,int>> m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=make_pair(n-i,1);
        }
        else{
            m[arr[i]].second++;
        }
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second.first<<endl;
    }
    priority_queue<pair<int,pair<int,int>>> q;
    for(auto i:m){
        // cout<<i.first<<" "<<i.second.first<<endl;
        q.push(make_pair(i.second.second,make_pair(i.second.first,i.first)));
    }
    vector<int> result;
    while(!q.empty()){
        auto itr = q.top();
        q.pop();
        for(int i=0;i<itr.first;i++){
            result.push_back(itr.second.second);
        }
    }
    return result;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
vector<int> result=get_done(n,arr);
for(int i=0 ; i<n; i++){
    cout<<result[i]<<" ";
}
return 0;
}