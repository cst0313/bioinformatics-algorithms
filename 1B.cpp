#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  unordered_map<char,char>m;
  m['A'] = 'T';
  m['T'] = 'A';
  m['C'] = 'G';
  m['G'] = 'C';
  for(int i=0;i<s.length();i++){
    s[i] = m[s[i]];
  }
  reverse(s.begin(),s.end());
  cout<<s;
  return 0;
}
