#include <bits/stdc++.h>
using namespace std;

int xs[15][15] = {};
int dp[15][15] = {};

int d(int i, int j) {
  if (i < 0 || i > 14 || j < 0 || j > 14) return 0;
  return dp[i][j];
}


int main() {
  ifstream file("inputs/018.txt");

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j <= i; j++) {
      file >> xs[i][j];
    }
  }

  dp[0][0] = xs[0][0];
  for (int i = 1; i < 15; i++) {
    for (int j = 0; j <= i; j++) {
      dp[i][j] = max(d(i - 1, j - 1), d(i - 1, j)) + xs[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < 15; i++) {
    ans = max(ans, dp[14][i]);
  }

  cout << ans << "\n";
}
