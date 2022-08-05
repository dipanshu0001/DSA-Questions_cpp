#include<bits/stdc++.h>
using namespace std;
#define vec vector<vector<int>>
classc undirected{
    int v;
    int e;
    public:
    vec v;
    undirected(){};
    undirected(int v,int e){
        this->v=v;
        this->e=e;
        v=vec(v);
    }
    void makeAdjlist(int a,int b){
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    void bfs(){
        vector<bool> visted(v+1,false);
        queue<int> q;
        q.push()
    }
    
    
}
int main(){
    int v,e;
    cin>>v>>e;
    undirected und(v,e);
    
    return 0;
}