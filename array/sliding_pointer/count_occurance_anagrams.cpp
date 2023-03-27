#include<iostream>
#include<bits/stdc++.h>
// qeustion link
//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
using namespace std;
int get_count_brute(string p,string txt){ 
    // time=o(n^2) if pat.size()==txt.size()

int n=p.size(),m=txt.size();
int cnt=0;
map<char,int> mp;
for(int i=0;i<n;i++)
{
    // cout<<p[i]<<" "<<endl;
    mp[p[i]]++;
}
for(int i=0;i<m;i++){
    map<char,int> s=mp;
    for(int j=i;j<i+n;j++){
        s[txt[j]]--;
        if(s[txt[j]]==0){
            s.erase(txt[j]);
        }
    }
    if(s.size()==0){
        cnt++;
    }
}
return cnt;
}

int get_count_opti(string pat,string txt){
    int n=pat.size(),m=txt.size();
    map<char,int> mp;
     for(int i=0;i<n;i++){
        mp[pat[i]]++;
     }
     int i=0,j=0,cnt=0;
     map<char,int> sample;
     while(j<m){
        sample[txt[j]]++;
        if(j-i+1<n){
            j++;
        }
        else if(j-i+1==n){
            if(sample.size()==mp.size()){
                bool check =true;
                for(int k=0;k<n;k++){
                    if(sample[pat[k]]!=mp[pat[k]]){
                         check=false;
                         break;
                    }
                }
                if(check){
                    cnt++;
                }
            }
            sample[txt[i]]--;
            if(sample[txt[i]]==0){
                sample.erase(txt[i]);
            }
            i++;
            j++;
        }

     }
     return cnt;


}

int get_count_opti_2(string p,string t){
    //  this is thebest approach as previously i need to iterate over map each time i slide the window but in
    //  this we dont need to iterate over map again and again we will take a var which store distinct char in map
    //  now we will reduce freq by 1 in pat map while treversing txt string asa m of current char become 0 we will reduce count by 1
    //  now when we achived window size we simply check if count ==0 means all distinct char are used so that is anagram
    //  now to mover i pointer we need to execlude it cal from pat map inc by 1 char at i in map and also first check if char count is 0 then inc count by 1
    int n=p.size(),m=t.size(),i=0,j=0;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[p[i]]++;
    }
    int cnt=mp.size(),result=0;
    while(j<m){
        mp[t[j]]--;
        if(mp[t[j]]==0){
            cnt--;
        }
        if(j-i+1<n){
            j++;
        }
        else if(j-i+1==n){
            if(cnt==0){
                result++;
            }
            if(mp[t[i]]==0){
                cnt++;
            }
            mp[t[i]]++;
            i++;
            j++;
        }
    }
    return result;

}

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
// Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.
string pat,txt;
cin>>pat>>txt;
// cout<<get_count_brute(pat,txt);
// cout<<get_count_opti(pat,txt);
cout<<get_count_opti_2(pat,txt);


return 0;
}