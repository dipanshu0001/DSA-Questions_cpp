#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        // a=
        
        string result="";
        for(int i=0;i<a.length();i++){
            if((a[i]>='a' and a[i]<='z') || (a[i]>='A' and a[i]<='Z')){
                if(a[i]>='a' and a[i]<='z'){
                    if(a[i]!='a' and a[i]!='i' and a[i]!='e' and a[i]!='o' and a[i]!='u'){
                        result+='.';
                        result+=a[i];
                    }
                }
                else{
                   if(a[i]!='A' and a[i]!='I' and a[i]!='E' and a[i]!='O' and a[i]!='U'){
                        result+='.';
                        result+=tolower(a[i]);
                    } 
                }
                
            }
        }
        cout<<result<<"\n";
            
    }
    return 0;
}
////Codeforces