#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> rabin_karp(string text, string pattern) {
  vector<int> result;
  int m = pattern.size();
  int n = text.size();
  long long p_hash = 0;
  int power = m - 1;
  for (char &c : pattern) {
    int k = ((c - 'a') + 1);
    double l = pow(10, power--);
    // cout<<k<<"*"<<l<<"=";
    int j = ((k)*l);
    // cout<<j<<endl;
    p_hash += j;
  }
  // cout << p_hash << endl;
  int i = 0, j = 0;
  long long current_hash = 0;
  int current_power = m - 1;
  while (j < n) {
    if (j - i < m) {
      current_hash += ((text[j] - 'a' + 1) * pow(10, current_power--));
      j++;
    } else if ((j - i) == m) {
      // is time abhi mane j included nhi hai ase mere idher (j-i)==3 hai mtb
      // (3-0) toh dekha jai
      // toh toal to length 4 hogai per merepass calculaion abhi index 2 takk
      // hai abhi mane 3 ki
      // include ki hai toh dekha jaye toh length toh 3 hi hai jiski calculation
      // hai mere pass
      // kyoki j-i <m nhi chlaega ase abh 3 hogai total diffrence so 3 ki
      // caculation khai include nhi ki //hai abh mai use include tabh kerunga
      // jabh mujhe last mai window move kerni hai i ki calculation
      // exculde kerke

      // cout << current_hash << " " << (j - i) << endl;
      if (current_hash == p_hash) {
        result.push_back(i);
      }
      // cout<<((pattern[i] - 'a'+1) * pow(10,last_power))<<endl;
      current_hash -= ((text[i++] - 'a' + 1) * (double)pow(10, m - 1));
      current_hash *= 10;
      current_hash += (text[j++] - 'a' + 1);
    }
  }
  if (current_hash == p_hash) {
    result.push_back(i);
  }
  return result;
}
int main() {
  string text;
  string pattern;
  cin >> text >> pattern;

  vector<int> v = rabin_karp(text, pattern);
  // cout << v.size() << endl;
  for (int i : v) {
    cout << i << " " << i + pattern.size() - 1 << endl;
  }
  return 0;
}