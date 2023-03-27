#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void DFS(int n,int k,int l,vector<vector<int>> &result,vector<int> &v,set<int> &s){
    if(l==0){
        // if(s.size()==n){
            // cnt++;
            result.push_back(v);
        // }
        return;
    }
    for(int i=1;i<=n;i++){
        if(s.empty() || s.find(i)==s.end()){
            s.insert(i);
            v.push_back(i);
            DFS(n,k,l-1,result,v,s);
            v.pop_back();
            s.erase(i);
        }
        else{
            if(s.size()>=(k+1)){
                s.insert(i);
            v.push_back(i);
            DFS(n,k,l-1,result,v,s);
            v.pop_back();
            s.erase(i);
            }
        }
    }
}
int main(){
int n,k,l;
cin>>n>>k>>l;
vector<vector<int>> result;
vector<int> v;
set<int> s;
DFS(n,k,l,result,v,s);
for(int i=0;i<result.size();i++){
    for(int j=0;j<result[i].size();j++)
    cout<<result[i][j]<<" ";
    cout<<endl;
}


return 0;
}