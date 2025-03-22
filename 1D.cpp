#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int k,l,t;
  cin>>k>>l>>t;
  unordered_map<string,vector<int>>m; // map of k-mers and their number of occurences
  string cur;
  for(int i=0;i<s.length()-k+1;i++){ // generate map of k-mers
    cur = s.substr(i,k);
    m[cur].push_back(i); // all the starting indices of the k-mer
  }
  for(auto element: m){
    vector<int> indices = element.second;
    if(indices.size()<t){ // it is impossible to form a L,t clump with less than t occurences
      continue;
    }
    int pt = t - 1;
    while(pt < indices.size()){
      if(indices[pt] - indices[pt - t + 1] + k - 1 <= l){ // there is a L,t clump
        cout<<element.first<<" ";
        break; // we no longer need to check for this element
      }
    }
  }
  return 0;
}
// Input:
// gatcagcataagggtccCTGCAATGCATGACAAGCCTGCAGTtgttttac 4 25 3
// Output:
// TGCA
