#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 bool isValid(string s) {
            if(s.size()<1)return false;
        
            stack<char> st;
            for(auto c:s){
                    if(c=='('||c=='['||c=='{')st.push(c);
                        else{
                if(!st.empty()){
                    char top = st.top();
                    if((c == ')' && top == '(') ||
                       (c == '}' && top == '{')||
                       (c == ']' && top == '[')){
                        st.pop();
                    }
                    else
                        return false;
                }
                else
                return false;
            }
            }
            // cout<<st.top()<<" "<<st.size();
            return st.empty();
            
    }
int main(){
string s;
cin>>s;
cout<<isValid(s);
return 0;
}