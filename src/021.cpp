#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> dp;

int d(int n) {
  if (dp[n] > 0) return dp[n];

  int ans = 0;
  int j = 0;

  for (int i = 1; i * i <= n; i++) {
    j = i;
    if (n % i == 0) {
      ans += i;
      ans += n / i;
    }
  }

  if (j * j == n) ans -= j;
  ans -= n;

  dp[n] = ans;
  return ans;
}

int main() {
  set<int> xs;
  for (int i = 1; i < 10000; i++) {
    int j = d(i);
    if (d(j) == i && i != j) {
      xs.insert(i);
      xs.insert(j);
    }
  }

  int ans = 0;
  for (int x : xs) ans += x;

  cout << ans << "\n";
}
