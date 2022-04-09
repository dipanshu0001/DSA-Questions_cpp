#include<iostream>
using namespace std ;
#include <cstring>

void revstring(string s,int n){
if(n==0){
    return ;
}
cout<<s.at(n-1);
revstring(s,n-1);
}
void pi(string s){
    if(s.length()==0)return;
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        pi(s.substr(2));
    }
    else{
        cout<<s[0];
        pi(s.substr(1));

    }
    
}
void towerofhanoi(int n,char from,char used,char dest){
    if(n==0)return;
    towerofhanoi(n-1,from,dest,used);

    cout<<n<<" moving from "<<from<<"to"<<dest<<endl;
    towerofhanoi(n-1,used,from,dest);
    // cout<<n;
}
string removedup(string s){
    char g=s[0];
    string ans=removedup(s.substr(1));
    if(s.length()==0)return "";
    if(g==ans[0]){
        return ans;
    }
    return (g+ans);

}

void subseq(string s,string ans){
    if(s.length()==0){cout<<ans<<endl;return;}
    char d=s[0];
    string ros=s.substr(1);
    subseq(ros,"");
    subseq(ros,ans+d);

}
int main(){
string s;cin>>s;int n=s.size();
// cout<<n;
// revstring(s,n);
// pi(s);
towerofhanoi(3,'A','B','C');
subseq(s,"");

return 0;
}