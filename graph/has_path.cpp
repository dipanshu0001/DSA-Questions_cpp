#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define vec vector<vector<int>>
/*

Given an undirected graph G(V, E) and two vertices v1 and v2(as integers),
 check if there exists any path between them or not. Print true or false.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
*/
bool bfs(vec v,int elem,int v1,int v2 ){
    vector<bool> visited(elem+1,false);
    queue<int> q;
    q.push(v1);
    visited[v1]=true;
    while(!q.empty())
    {
        int help=q.front();
        q.pop();
        if(help==v2)return true;
        for(auto i:v[help]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
int v,e;
cin>>v>>e;
vec result(v);
for(int i=0;i<e;i++){
    int a,b;
    cin>>a>>b;
    result[a].emplace_back(b);
    result[b].emplace_back(a);
}
int n1,n2;
cin>>n1>>n2;
cout<<bfs(result,v,n1,n2)<<endl;

    }
return 0;
}