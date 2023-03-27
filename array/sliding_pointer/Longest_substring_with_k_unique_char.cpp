#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_longest_brute(string &s,int k){

    // time =o(n^2) space=o(max uniqiue character in string of size n)
    int max_length=1;
    int n=s.size();
    for(int i=0;i<s.size();i++){
        map<char,int> m;
        bool isbreak=false;
        for(int j=i;j<s.size();j++){
            m[s[j]]++;
            if(m.size()>k){
                max_length=max(max_length,(j-i));
                cout<<max_length<<" "<<s.substr(i,j)<<endl;
                isbreak=true;
                break;
            }
        }
        if( !isbreak and m.size()==k)
        {
                max_length=max(max_length,(n-i));
                cout<<max_length<<" "<<s.substr(i,s.size())<<endl;
                // break;
            }

    }
    return max_length;
}
int get_longest_opt(string &s,int k){
    int i=0,j=0;
    map<char,int> m;
    int max_length=1;
    while(j<s.size()){
        m[s[j]]++;
        if(m.size()<k)j++;
        else if(m.size()==k){
            max_length=max(max_length,(j-i+1));
            j++;
        }
        else{
            while(m.size()>k){
                if(--m[s[i++]]==0)m.erase(s[i]);
            }
            j++;

        }
    }
    return max_length;
}
int main(){
string s;
cin>>s;
int k;
cin>>k;
cout<<get_longest_brute(s,k);
cout<<get_longest_opt(s,k);
return 0;
}