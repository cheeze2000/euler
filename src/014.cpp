#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<ll, ll> dp;

ll d(ll n) {
  if (n == 1) return 1;
  if (dp.count(n) == 1) return dp[n];

  if (n % 2 == 0) {
    dp[n] = 1 + d(n >> 1);
  } else {
    dp[n] = 1 + d(3 * n + 1);
  }

  return dp[n];
}


int main() {
  ll ans = 1;
  for (int i = 1; i < 1000000; i++) {
    if (d(i) > d(ans)) ans = i;
  }

  cout << ans << "\n";
}
