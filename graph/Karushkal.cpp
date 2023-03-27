#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int parent[100000];
//  rank int array will produce error ambiguity as rank is struct library in c++11
int ranks[100000];
class Node{
    public:
    int u,v,w;
    Node(int a,int b,int s){
        u=a,v=b,w=s;
    }
};
static bool cmp(Node a,Node b)
{
    return a.w<b.w;
    
}
int Parentof(int u ){
    if(parent[u]==u)return u;
    return parent[u]=Parentof(parent[u]);
}
void Union(int &x,int &y,int parent[],int rank[])
{
    x=Parentof(x);
    y=Parentof(y);
    if(rank[x]==rank[y]){
        rank[x]++;
        parent[y]=x;
    }
    else if(rank[x]>rank[y]){
        parent[y]=x;
    }
    else parent[x]=y;

}

void set_parent(int n){
    for(int i=0;i<=n;i++){
        parent[i]=i;
        ranks[i]=0;
    }
}
int main(){

int v,e;
cin>>v>>e;
vector<Node> adj;
for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj.push_back(Node(u,v,w));
}
sort(adj.begin(),adj.end(),cmp);
int cost=0;
vector<pair<int,int>> result;
set_parent(v);
for(Node itr:adj){
    if(Parentof(itr.u)!=Parentof(itr.v) and itr.u!=itr.v){ // this will only run true if parent of u and v are diffrent or we can say that they are diffrent component 
    // and u!-v means if a node is pointing itself
        cost+=itr.w;
        Union(itr.u,itr.v,parent,ranks);
        result.push_back({itr.u,itr.v});


    }
}
for(int i=0;i<result.size();i++){
    cout<<result[i].first<<"->"<<result[i].second<<endl;
}

return 0;
}