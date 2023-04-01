// string - GraphTreesGraph
// pattern - aba
// Output: true

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long get_hash(string text) {
  map<string, int> m;
  int i = 0;
  int j = 0;
  int cnt = 1;
  long long hash = 0;
  string sample = "";
  sample += text[0];
  for (int i = 1; i < text.size(); i++) {
    if (text[i] >= 'A' and text[i] <= 'Z') {
      cout << sample << " ";
      if (m.find(sample) == m.end()) {
        m[sample] = ++cnt;
        hash *= 10;
        hash += cnt;
      } else {
        hash *= 10;
        hash += m[sample];
      }
      sample = "";
      sample += text[i];
      cout << hash << endl;
    } else
      sample = sample + text[i];
    // cout<<sample<<endl;
  }
  if (m.find(sample) == m.end()) {
    m[sample] = ++cnt;
    hash *= 10;
    hash += cnt;
  } else {
    hash *= 10;
    hash += m[sample];
  }
  cout << hash << endl;
  return hash;
}

int get_hash_char(string pattern) {
  int cnt = 1;
  map<char, int> m;
  long long hash = 0;
  for (char &c : pattern) {
    if (m.find(c) == m.end()) {
      m[c] = ++cnt;
    }
    hash *= 10;
    hash += m[c];
  }
  cout << hash << endl;
  return hash;
}

int main() {
  string text, pattern;
  cin >> text >> pattern;

  long long hash1 = get_hash(text);
  long long hash2 = get_hash_char(pattern);
  cout << (hash1 == hash2) << endl;
  return 0;
}