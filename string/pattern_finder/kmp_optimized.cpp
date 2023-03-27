#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> get_lps(string patrn) {
  vector<int> lps(patrn.size(), 0);
  int i = 1, len = 0;
  while (i < patrn.size()) {
    while (patrn[i] == patrn[len]) {
      len++;
      lps[i] = len;
      i++;
    }
    if (len != 0) {
      len = lps[len - 1];
    } else {
      lps[i] = 0;
      i++;
    }
  }
  return lps;
}
vector<int> search_through_kmp(string txt, string patrn) {
  vector<int> lps = get_lps(patrn), result;
  int i = 0, j = 0;
//   cout<<"pattern found at index:->"<<endl;
//   for(auto i:lps){
//       cout<<(i)<<" ";
//   }
  int n = txt.size(), m = patrn.size();
  while((n-i)>=(m-j)){
      if(txt[i]==patrn[j]){i++,j++;}
      if(j==m){
          result.push_back((i-j));
        j=lps[j-1];
      }
      else if(txt[i]!=patrn[j]){
          if(lps[j-1]!=0)
          {
              j=lps[j-1];
          }
          else
          {
              i++;
          }

      }
  }
  return result;
}
int main() {
  string txt, pattern;
  cin >> txt >> pattern;
  vector<int> result = search_through_kmp(txt, pattern);
  cout<<"\npattern found at index:->"<<endl;
  for(auto i:result){
      
      // cout<<(i-pattern.size())<<" ";
    cout<<i<<" ";
  }

  return 0;
}