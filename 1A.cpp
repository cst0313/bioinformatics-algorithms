#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int k;
  cin>>k;
  unordered_map<string,int>m;
  string cur;
  for(int i=0;i<s.length()-k+1;i++){
    cur = s.substr(i,k);
    m[cur]++;
  }
  vector<pair<string,int>>v;
  int curmax = 0;
  for(auto pair: m){
    if(pair.second>curmax){
      v.clear();
      v.push_back(pair);
    }else if(pair.second == curmax){
      v.push_back(pair);
    }
    curmax = max(curmax, pair.second);
  }
  for(auto pair:v){
    cout<<pair.first<<endl;
  }
  return 0;
}
