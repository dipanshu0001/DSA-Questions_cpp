#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void findshortest(vector<pair<int,int>> adj[], int src, int N)
{
   int dist[N];
	for(int i = 0;i<N;i++) dist[i] = INT_MAX; 
	queue<int>  q;
	
	dist[src] = 0;
	q.push(src); 

	while(q.empty()==false) 
	{ 
		int node = q.front(); 
		q.pop();
		 
		for(auto it:adj[node]){
		    if(dist[node] + it.second < dist[it.first]){
		        dist[it.first]=dist[node]+it.second;
		        q.push(it.first);
		    }
		} 
	} 
	for(int i = 0;i<N;i++) cout <<i<<" "<< dist[i] << " "<<endl;
}
int main()
{
    int e,v;
    cin >> e >> v;
    vector<pair<int,int>> adj[v];
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
        // adj[v].push_back(u);
    }
    int src;
    cin >> src;
    findshortest(adj, src, v);
    return 0;
}