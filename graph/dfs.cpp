#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class dfs{
    int row;int edge;
    public:
    vector<vector<int>> v;
    dfs(int row,int edge){
        this->row=row;
        this->edge=edge;
        v=vector<vector<int>>(row+1);
    }
    void insert(int u,int v1){
        v[u].push_back(v1);
        v[v1].push_back(u);
    }
    void adjclist(int edges){
        for(int i=0;i<edges;i++){
            int u,v1;
            cin>>u>>v1;
            insert(u,v1);
        }
    }
    vector<int> dfs_trav(int ele){
        stack<int>s;
        vector<bool> visted(row+1);
        vector<int> ans;
        s.push(ele);
        // ans.push_back(ele);
        visted[ele]=true;
        while(!s.empty()){
            int val=s.top();
            ans.push_back(val);
            s.pop();
            for(int i=0;i<v[val].size();i++){
                if(visted[v[val][i]]==false){
                    s.push(v[val][i]);
                    visted[v[val][i]]=true;
                }
            }

        }
        return ans;
    }
    void print()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << i << " :->";
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }



};
int main(){
int row,edge;
cin>>row>>edge;
dfs d(row,edge);
d.adjclist(edge);
int ele;
cout<<"Enter vertex from which you want to start dfs"<<endl;
cin>>ele;
vector<int> v=d.dfs_trav(ele);
for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
cout<<endl;
d.print();
return 0;
}