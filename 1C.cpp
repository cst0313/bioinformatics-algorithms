#include <bits/stdc++.h>
using namespace std;
int main(){
  string s,p;
  cin>>s>>p;
  int n = p.length();
  for(int i=0;i<s.length()-n+1;i++){
    if(s.substr(i,n) == p){
      cout<<i<<" ";
    }
  }
  return 0;
}
