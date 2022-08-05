#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void top_sort(vector<pair<int,int>> adj[],int src,stack<int> &st,bool visited[]){
visited[src]=true;
for(auto s: adj[src]){
    if(!visited[s.first]){
        top_sort(adj,s.first,st,visited);
    }
}
st.push(src);
}
void cal_shortest(vector<pair<int,int>> adj[],int src,int v){
    stack<int> s;
    bool visited[v]={false};
    vector<int> dist(v,INT_MAX);
    top_sort(adj,src,s,visited);
    // int dist[v]={INT_MAX};
    dist[src]=0;
    while(!s.empty()){
        int help=s.top();
        s.pop();
        if(dist[help]!=INT_MAX)
        for(auto itr:adj[help]){
            if((dist[help]+itr.second)<dist[itr.first]){
                dist[itr.first]=(dist[help]+itr.second);
            }
        }
    }
    for(int i=0;i<v;i++)
    (dist[i]==INT_MAX)?cout<<"INTF"<<endl:cout<<i<<" "<<dist[i]<<endl;

}
int main(){
int e,v;
cin>>e>>v;
vector<pair<int,int>> adj[v];
for(int i=0;i<e;i++){
int u,w,v;
cin>>u>>v>>w;
adj[u].push_back({v,w});

}
int src;
cin>>src;
cal_shortest(adj,src,v);
return 0;
}