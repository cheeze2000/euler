#include <bits/stdc++.h>
using namespace std;

bool dp[56248] = {};

int d(int n) {
  int ans = -n;
  int j = 0;

  for (int i = 1; i * i <= n; i++) {
    j = i;
    if (n % i == 0) {
      ans += i;
      ans += n / i;
    }
  }

  if (j * j == n) ans -= j;

  return ans;
}

int main() {
  vector<int> xs;

  for (int i = 1; i < 28124; i++) {
    int j = d(i);
    if (j > i) {
      xs.push_back(i);
      for (int x : xs) {
        dp[i + x] = true;
      }
    }
  }

  long ans = 0;
  for (int i = 1; i < 28124; i++) {
    if (dp[i]) continue;
    ans += i;
  }

  cout << ans << "\n";
}
