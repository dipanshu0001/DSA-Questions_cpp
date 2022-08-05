#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
used for calulating shortest distance from a single source
main idea is that calculate shortest diastnace to its neighbour and then move furthur
select minimum distance from neightbour and update the furthur distance by checking the condition
distance[u]+cost(u,v)<=distnace[v] if true update=> distance[v]=distance[u]+cost(u,v)
time complexity=> o(v^2) where v is number of vector
space compelxity=>o(v^2)+2*v
*/
// 
void print(int distance[],int v){
    cout<<"vertex        distance from source"<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<"              "<<distance[i]<<endl;
    }
}
int minvertex_value(int distance[],bool visted[],int v){
    int min_value=INT_MAX;
    int min_index=0;
    for(int i=0;i<v;i++){
        if(visted[i]==false and min_value>distance[i]){
            min_index=i;
            min_value=distance[i];
        }
    }
    return min_index;
}
void dijkastra(vector<vector<int>> &graph,int V,int src)
{
    int distance[V];
    bool visted[V];
    /// assgien all visted and distance false and INT_MAX
    for(int i=0;i<V;i++){
        distance[i]=INT_MAX;
        visted[i]=false;
    }
    distance[src]=0;
     for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in the first iteration.
        int u = minvertex_value(distance,visted,V);
 
        // Mark the picked vertex as processed
        visted[u] = true;
 
        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)
 
            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!visted[v] && graph[u][v] && distance[u] != INT_MAX
                && distance[u] + graph[u][v] < distance[v]){
                distance[v] = distance[u] + graph[u][v];
                cout<<distance[v]<<endl;}
    }
 
    // print the constructed distance array
    // printSolution(dist);
    print(distance,V);
}
    

int main()
{
    int v;
    cin >> v;
    vector<vector<int> > graph(v,vector<int>(v,0));
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> graph[i][j];
        }
    }
    int src;
    cout<<"Enter the soruce from which u want to start shortest distance"<<endl;
    cin>>src;
    dijkastra(graph,v,src);
    return 0;
}