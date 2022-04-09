#include<iostream>
#include<bits/stdc++.h>
#define loop(i,a,b)for(int i=0;i<b;i++)
using namespace std ;
bool srt(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second){return true;}
    else return false;
}
int slectivity_active(vector<pair<int,int>> v,int n){
    // sort(e,+n,srt);
    sort(v.begin(),v.end(),srt);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    int cnt=1;
    int prev=v[0].second;
    for(int i=1;i<n;i++){
        if(prev<=v[i].first){
            cnt++;
            prev=v[i].second;
        }
    }
    return cnt;
    /*
    1 2
    3 4
    0 6
    5 7
    5 9
    8 9
    */
}

int main(){
int n;
cin>>n;
// int start_time[n];
// int end_time[n];
vector<pair<int,int>>v(n);
int i;
// loop(i,0,n){cin>>start_time[i];}
// int j;
loop(i,0,n){
    // cout<<"enter start time\n";
    cin>>v[i].first;
    // cout<<"enter finish time of the above start time\n";
    cin>>v[i].second;
}
cout<<slectivity_active(v,n);

///  5 1 3 0 5 8 start_time
///  9 2 4 6 7 9 end_time



return 0;
}