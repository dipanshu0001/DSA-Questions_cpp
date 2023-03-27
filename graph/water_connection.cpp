//{ Driver Code Starts
// qeustion link:-> https://practice.geeksforgeeks.org/problems/water-connection-problem5822/1
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void DFS(vector<pair<int,int>> adj[],int src,int &min_weight,int &last_node,vector<int> &indeg,vector<int>&outdeg){
        if(outdeg[src]==0)return;
        // visit[src]=1;
        outdeg[src]=0;
        indeg[adj[src][0].first]=0;
        min_weight=min(min_weight,adj[src][0].second);
        last_node=adj[src][0].first;
        DFS(adj,adj[src][0].first,min_weight,last_node,indeg,outdeg);
    }
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        vector<pair<int,int>> adj[n+1];
        vector<int> indeg(n+1,0),outdeg(n+1,0);
        for(int i=0;i<p;i++){
            adj[a[i]].push_back({b[i],d[i]});
            outdeg[a[i]]=1;
            indeg[b[i]]=1;
        }
        vector<vector<int>> result;
        // vector<int> visit(n+1,0);
        for(int i=1;i<n+1;i++){
            if(adj[i].size()!=0){
                if(indeg[i]==0 and outdeg[i]==1){
                    // cout<<i<<" ";
                    int min_weight=adj[i][0].second;
                    int last_node=adj[i][0].first;
                    DFS(adj,i,min_weight,last_node,indeg,outdeg);
                    // vector<int> sample=};
                    result.push_back({i,last_node,min_weight});
                    // cout<<sample[0]<<" "<<sample[1]<<" "<<sample[2]<<endl;
                }
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}
// } Driver Code Ends