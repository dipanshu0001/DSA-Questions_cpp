#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define vec vector<vector<int>>
class undirected
{
    protected:
    int row;
    int edges;
    // vector<pair<int,bool>> check;

public:
    vec v;
    undirected() {}
    undirected(int row, int edges)
    {
        this->row = row;
        this->edges = edges;
        v = vec(row+1);
        // check=vector<pair<int,bool>> (row);

    }
    void insert(int u, int v)
    {
        this->v[u].push_back(v);
        this->v[v].push_back(u);
    }
    void print(vec v)
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
    // void bfs()
    void makeadjlist(vec v)
    {
        int i;
        loop(i, 0, edges)
        {
            int u1, v;
            cin >> u1 >> v;
            insert(u1, v);
        }
    }
    void bfs(int vertex){
        vector<bool> visted;
        queue<int> q;
        visted.resize(row+1,false);
        q.push(vertex);
        visted[vertex]=true;
        while(!q.empty()){
            int value=q.front();
            q.pop();
            cout<<value<<" ";
            for(auto i:v[value]){
                if(!visted[i]){
                    q.push(i);
                    visted[i]=true;
                }
            }

        }

    }
    void dfs(int vertex){
        stack<int> s;
        vector<bool> visted(row+1,false);
        visted[vertex]=true;
        s.push(vertex);
        while(!s.empty()){
            int value=s.top();
            s.pop();
            cout<<value<<" ";
            for(auto val:v[value]){
                if(!visted[val]){
                    visted[val]=true;
                    s.push(val);
                }
            } 
        }
    }
};
class directed:public undirected{
    public:
    // vector<vector<int>> v;
    directed(int row, int edges)
    {
        this->row = row;
        this->edges = edges;
        v = vec(row+1);
        // check=vector<pair<int,bool>> (row);

    }
        void makeadjlist(vec v)
    {
        int i;
        loop(i, 0, edges)
        {
            int u1, v;
            cin >> u1 >> v;
            insert(u1, v);
        }
    }

     void insert(int u, int v)
    {
        this->v[u].push_back(v);
        // this->v[v].push_back(u);
    }
};
int main()
{
    //1 4 2 3 5 8 7 10 9 6 
       //1 2 3 9 10 7 8 5 6 4
    int row;
    int edges;
    cin >> row >> edges;
    // undirected u(row, edges);
    directed d(row,edges);
    d.makeadjlist(d.v);
    d.print(d.v);
    cout<<"Enter vertex from which u want to start bfs";
    int vertex;
    cin>>vertex;
    d.bfs(vertex);cout<<endl;
    d.dfs(vertex);
    return 0;
}