#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> brute(string p,string t)
{
    vector<int> result;
    for(int i=0;i<p.size();i++){
        int j;
        for(j=0;j<t.size();j++){
            if(t[j]!=p[i+j])break;
        }
        if(j==t.size()){
            result.push_back(i);
        }
    }
    return result;

}

int main(){
string pattern,text;
cin>>pattern>>text;
vector<int> result=brute(pattern,text);
return 0;
}