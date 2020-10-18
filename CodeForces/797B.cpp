#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

int main(){
  int n,odd1=INF,sum=0,x;
  cin >> n;
  for(int i = 0; i < n;i++){
    cin >> x;
    if(x > 0){
      sum += x;
    }
    if(x & 1){
      odd1 = min(odd1,abs(x));
    }
  }
  if(sum & 1){
    cout << sum << endl;
  }else{
    cout << sum-abs(odd1) << endl;
  }
  return 0;
}