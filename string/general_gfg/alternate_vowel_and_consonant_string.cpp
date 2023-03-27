#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
        return (c=='a'||c=='e'||c=='o'||c=='i'||c=='u');
    }
string get_done(string S,int N){
vector<int> vowel(26,0);
        vector<int> con(26,0);
        int v=0,c=0;
        for(int i=0;i<N;i++){
            if(isVowel(S[i])){v++;vowel[S[i]-'a']++;}
                    else {con[S[i]-'a']++;c++;}
        }
        if(abs(v-c)>1)return "-1";
        string result=""; 
        int i=0,j=0;
        while(i<26 and j<26){
            while(vowel[i]==0 and i<26)i++;
            while(con[j]==0 and j<26)j++;
            if((result=="" and vowel[i]<con[j]) or !isVowel(result.back()))
            {
                result+='a'+i;
                vowel[i]--;
                // cout<<"this when vowel is added"<<result<<" "<<endl;
            }
            else if ((result=="" and vowel[i]>con[j]) or isVowel(result.back())){
                result+='a'+j;
                con[j]--;
                // cout<<"this when consonent is added"<<result<<" "<<endl;
            }
        }
        // if(j<26 or i<26)return "-1";
        return result;
}
int main(){
string s;
cin>>s;
cout<<get_done(s,s.size());
return 0;
}