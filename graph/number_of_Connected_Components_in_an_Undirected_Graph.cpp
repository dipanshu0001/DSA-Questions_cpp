#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
/*
Given n nodes labeled from 0 to n - 1 and a list of undirected edges (each edge is a pair of nodes),
 write a function to find the number of connected components in an undirected graph.


Input: n = 5 and edges = [[0, 1], [1, 2], [3, 4]]
     0          3
     |          |
     1 --- 2    4

Output: 2
 */



/*  now as we can see we want to return the number of connected component so basically 
if once a node is visited we cant visit as it is already been part of the path or connected component
we need to go in dept hos node so we do dfs on each node if it has been alredy not been visited previusly
as it has been counted in one of the previous components we want to return total dfs we will apply on each node
*/
void dfs(vector<vector<int>> adj,int start_node,bool visited[]){
    if(visited[start_node]==true)return;
    visited[start_node]=true;
    for(int i=0;i<adj[i].size();i++){
        if(adj[start_node][i]==1 and !visited[i]){
            dfs(adj,i,visited);
        }
    }
}
int main(){
cout<<"hello";
int edge,vert;
cin>>edge>>vert;
vector<vector<int>> adj_matrix(vert+1,vector<int>(vert+1));
for(int i=0;i<edge;i++){
    // for(int j=0;j<vert;j++){
        int a,b;
        cin>>a>>b;
        adj_matrix[a][b]=1;
        adj_matrix[b][a]=1;
    // }
}
bool visited[vert+1]={false};
int total_connected_components=0;
for(int i=0;i<vert;i++){
if(!visited[i]){

    dfs(adj_matrix,i,visited);
    total_connected_components++;
}
}
cout<<total_connected_components;

return 0;
}