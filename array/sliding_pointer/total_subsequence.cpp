#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<vector<int>> result;
for(int i=0;i<(1<<n);i++){
    vector<int> sample;
    for(int ele=0;ele<n;ele++){
        if((sample.empty() or sample.back()<=arr[ele]) and (i&(1<<ele))){
            sample.push_back(arr[ele]);
        }
    }
    result.push_back(sample);
}
for(int i=0;i<(1<<n);i++){
    if(result[i].size()<2){continue;}
    for(int ele:result[i]){
        cout<<ele<<" ";
    }
    cout<<endl;
}

return 0;
}