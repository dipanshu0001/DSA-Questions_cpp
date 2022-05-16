#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void print(vector<vector<int>> matrix ,int row){
    for(int i=1;i<row;i++){
        cout<<i<<":";
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
}
class undirected{
    protected:
// public:
    int row;
    int edge;
    
    public:
vector<vector<int>> v;
    
undirected(){}
    undirected(int row,int edge){
        this->row=row;
        this->edge=edge;
      // vector<vector<int>> v(row);
      v=vector<vector<int>>(row);
      // insert(v,row,edge);
    }

    void insert(int r,int c){
        v[r].push_back(c);
        v[c].push_back(r);
    }


    
};
class directed: public undirected{
// protected:
    
    public:
vector<vector<int>> direc;

directed(){
}
    directed(int row,int edge){
        this->row=row;
        this->edge=edge;
      direc=vector<vector<int>>(row);
    }
    void insert(int r,int c){
        direc[r].push_back(c);
        // v[c].push_back(r);
    }
};
int main(){
    /// space here it is taken =o(n+2*e) e=total number of edges in graph
int row,edge;
cin>>row>>edge;

row++;
// vector<vector<int>> matrix(row);
undirected und(row,edge);
directed direc(row,edge);

for(int i=0;i<edge;i++){
    int r,c;
    cin>>r>>c;
    // vector<int> v;
    und.insert(r,c);
  direc.insert(r,c);
}
  // cout<<und.v[1][2];
print(und.v,row);
  cout<<endl;
  print(direc.direc,row);

return 0;
}
