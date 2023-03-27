#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int gcd(int a,int b){
  if(a==b)return a;
  if(a>b)return gcd(a-b,b);
  return gcd(a,b-a);
}
string get_done(string s)
{
  string sample = "";
  string result = "";
  vector<int> v;
  int i = 0;
  for (int j = 0; j < s.size(); j++)
  {
    char c = s[j];
    if (c == '/' or c == '+')
    {
      string h = s.substr(i, j);
      v.push_back(stoi(h));
      i = j + 1;
    }
  }
  string h = s.substr(i, s.size());
  v.push_back(stoi(h));

  // for (int i = 0; i < 4; i++)
  // {
  //   cout << v[i] << " ";
  // }
  int hcf=(v[1]*v[3])/gcd(v[1],v[3]);
  v[0]=v[0]*(hcf/v[1]);
  v[2]*=(hcf/v[3]);
  int final_sum=(v[0]+v[2]);
  if((final_sum)%hcf==0){
    final_sum/=hcf;
    hcf=1;
  }
  return (to_string(final_sum)+"/"+to_string(hcf));
  // return "";
}
int main()
{
  string s;
  s = "154/51+789/56";
  string result = get_done(s);
  cout<<result;
  return 0;
}