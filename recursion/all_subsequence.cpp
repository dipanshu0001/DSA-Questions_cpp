#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> get_ll_subsqeunce_powerset(string arr,int size){
    // time -> o(2^n)*n
    // space -->o(2^n)
    vector<string> result;
    for(int i=0;i<((1<<size));i++){
        string sample="";
        for(int j=0;j<size;j++){
            if(i & (1<<j)){
                sample+=arr[j];
            }
        }
        cout<<endl;
        result.push_back(sample);

    }
    return result;
}
void  get_ll_subsqeunce_recursion(string arr,int size,int index=0,string sample=""){
    // time->o(2*n)
    //space->o(n)
if(index>=size){
    // v.push_back(sample);
    cout<<sample<<endl;
    return;
}
sample+=arr[index];
get_ll_subsqeunce_recursion(arr,size,index+1,sample);
sample.pop_back();
get_ll_subsqeunce_recursion(arr,size,index+1,sample);
// return v;
}
void print(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
// int size;
// cin>>size;
// string arr[size];
// for(int i=0;i<size;i++){
//     cin>>att[i];
// }
string s;
cin>>s;
// vector<string> result=get_ll_subsqeunce_powerset(s,s.size());
vector<string> result;
get_ll_subsqeunce_recursion(s,s.size());
print(result);
return 0;

}