#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
vector < ll > div;

ll total(ll n) {
  ll qtd = 0;
  while (n % 2 == 0) {
    qtd++;
    n /= 2;
    div.push_back(2);
  }
  for (ll i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      qtd++;
      n /= i;
      div.push_back(i);
    }
  }
  if (n > 2) {
    qtd++;
    div.push_back(n);
  }
  return qtd;
}

int main() {
  ll n, k, qtd = 0;
  cin >> n >> k;
  if (total(n) < k) {
    printf("-1");
  } else {
    ll m = 1;
    for (int i = 0; i < k - 1; i++) {
      cout << di[i] << " ";
    }
    for (int i = k - 1; i < di.size(); i++) m *= di[i];
    cout << m;
  }
  return 0;
}