// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
// s1="cbdcbcacbdbcac" s2="abcc"
// 1--> cbdc abcc 
// 2--> bdcb abcc
// 3--> dcbc abcc
// arr --> a b c 
//         1  1 2
// for(int i=0;i<s.size();i++)
// {
//     v[s[i]-'0']++;
// }
// for(int i=0;i<s2.size();i++){
//     if(v[s2[i]]!=arr[s2[i]])return false;
// }
// return true;




// time =o(n*k) space=o(k)
bool isequal(string s,vector<int> arr){
    // int a[26];
  vector<int> a(26,0);
    for(auto &ae:s){
        a[ae-'a']++;
      cout<<ae<<" ="<< (ae-'a')<<endl;
    }
  // for(int i=0;i<26 ;i++)cout<<a[i]<<" ";
    for(int i=0;i<26;i++){
        if(arr[i]!=a[i])return false;
    }
    return true;
}
vector<int> findAll_brute(string s,string p){
    // int pattern[26];
  vector<int> pattern(26,0);
    for(int i=0;i<p.size();i++){
        pattern[p[i]-'a']++;
    }
    vector<int> result;
    int i=0;
  while(i<=(s.size() -p.size())){
        string h=s.substr(i,p.size());
    // cout<<h<<endl;
        if(isequal(h,pattern)){
            result.push_back(i);
        }
    i++;
    }
    return result;
}

vector<int> findAll_optimized(string s ,string p){
// we use map to store freq of string p
map<char,int> m;
for(auto a:p){
m[a]++;
}
int i=0,j=0,k=p.size();
int count=m.size();
vector<int> result;
while(j<s.size()){
    if(m.find(s[j])!=m.end()){
        m[s[j]]--;
        if(m[s[j]]==0){
            count--;
        }
    }

    if((j-i+1)<k){
        j++;
    }
    else if((j-i+1)==k){
        if(count==0)result.push_back(i);
        if(m.find(s[i])!=m.end()){
            m[s[i]]++;
            if(m[s[i]]==1)count++;
        }
i++;
j++;

    }
}
return result;
}

int main(){
string s,p;
cin>>s>>p;
// vector<int> anagrams=findAll_brute(s,p);
vector<int> anagrams=findAll_optimized(s,p);
for(int i=0;i<anagrams.size();i++)cout<<anagrams[i]<<" ";
return 0;
}