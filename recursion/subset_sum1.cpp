#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> get_ll_subsqeunce_powerset(int arr[],int size){
    // time -> o(2^n)*n
    // space -->o(2^n)
    vector<int> result;
    for(int i=0;i<((1<<size));i++){
        int sample=0;
        for(int j=0;j<size;j++){
            if(i & (1<<j)){
                sample+=arr[j];
            }
        }
        // cout<<endl;
        result.push_back(sample);

    }
    return result;
}
void  get_ll_subsqeunce_recursion(int arr[],int size,int index=0,int sample=0){
    // time->o(2*n)
    //space->o(n)
if(index>=size){
    // v.push_back(sample);
    cout<<sample<<" ";
    return;
}
sample+=arr[index];
get_ll_subsqeunce_recursion(arr,size,index+1,sample);
sample-=arr[index];
get_ll_subsqeunce_recursion(arr,size,index+1,sample);
// return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int size;
cin>>size;
int s[size];
for(int i=0;i<size;i++){
    cin>>s[i];
}
// cin>>s;
// vector<int> result=get_ll_subsqeunce_powerset(s,size);
// vector<int> result;
get_ll_subsqeunce_recursion(s,size);
// print(result);
return 0;
}