#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  queue<int>q;
  q.push(0);
  int mo = 0; // minimum occurence
  int cur_diff = 0;
  for(int i = 0; i < s.length(); i ++){
    if(s[i] == 'G'){
      cur_diff ++;
    }else if(s[i] == 'C'){
      cur_diff --;
    }
    if(cur_diff < mo){
      queue<int>().swap(q); //clear the current queue
      q.push(i);
      mo = cur_diff;
    }else if(cur_diff == mo){
      q.push(i);
    }
  }
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}
// input:
// CATGGGCATCGGCCATACGC
// output:
// 0 1 2 17 19
