#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_longest_brute(string &s){
    // time->o(n^2) space=o(number  of unique char in string of size n)
    if(s.size()==0)return 0;
            if(s.size()==1)return 1;
        map<char,int> m;
            int length=0;
            for(int i=0;i<s.size();i++){
                    m[s[i]]++;
                    bool isbreak=false;
                    for(int j=i+1;j<s.size();j++){
                            if(m.find(s[j])!=m.end()){
                                    length=max(length,(j-i));
                                   m.clear();
                                    break;
                                    isbreak=true;
                            }
                            else{
                                    m[s[j]]++;
                            }
                    }
                     
                    if(isbreak==false){
                            int l=(m.size());
                            length=max(length,l);
                    }
                    m.clear();
            }
            // return (length>0)?length:m.size();
            m.clear();
            return length;
}
int get_longest_opt_1(string &s){

    // time->o(n if unordered_map taken and nlogn if map is taken)
    // space=>o(number  of unique char in string of size n)
    int i=0,j=0;
    unordered_map<char,int> m;
    int max_length=1;
    while(j<s.size()){
        if(m.find(s[j])==m.end()){
            m[s[j]]++;
            // j++;/
        }
        else{
            // int l=m.size();
            max_length=max(max_length,(j-i));
            // cout<<s.substr(i,j-1)<<endl;
            while(m.find(s[j])!=m.end()){
                if(--m[s[i]]==0)m.erase(s[i]);
                i++;
            }
            cout<<j<<" "<<i<<endl;
            
            m[s[j]]++;
        }
        j++;
    }
    j=m.size();
    max_length=max(max_length,j);
    // if(m.size()==s.size())max_length=s.size();
    return max_length;
}
int get_longest_opt_2(string &s){
    int i=0,j=0;
    map<char,int> m;
    int max_length=0;
    while(j<s.size()){
         m[s[j]]++;
         if(m.size()<(j-i+1)){
            while(m.size()<(j-i+1)){
                if(--m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
         }
         else if(m.size()==(j-i+1)){
            max_length=max(max_length,(j-i+1));
         }
         j++;
    }
    return max_length;
}
int main(){
string s;
cin>>s;
cout<<get_longest_brute(s)<<endl;
cout<<get_longest_opt_1(s)<<endl;
cout<<get_longest_opt_2(s)<<endl;
return 0;
}