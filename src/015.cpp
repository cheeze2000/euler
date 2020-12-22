#include <bits/stdc++.h>
using namespace std;

long dp[40][40] = {};

long c(int a, int b) {
  if (b == 0 || a == b) return 1;
  if (a < b) return 0;

  if (dp[a][b] == 0) {
    dp[a][b] = c(a - 1, b) + c(a - 1, b - 1);
  }

  return dp[a][b];
}

int main() {
  cout << c(40, 20) << "\n";
}
