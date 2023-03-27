#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>> v(n);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;


}

return 0;
}
vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2);
        map<int,int>mw;
        map<int,int>ml;
        for(auto i:matches)
        {
            if(mw[i[0]]) mw[i[0]]++;
            else mw[i[0]]=1;
        }
        for(auto i:matches)
        {
            if(ml[i[1]]) ml[i[1]]--;
            else ml[i[1]]=-1;
        }
        for(auto m:ml){
            if(m.second>0)ans[0].push_back(m.first);
            else continue;
        }
        for(auto m:mw){
            if(m.second>0)ans[1].push_back(m.first);
        }
        return ans;
    }
};