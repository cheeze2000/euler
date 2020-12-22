#include <bits/stdc++.h>
using namespace std;

typedef int grid[20][20];

grid xs = {};
int dx[] = { 1, 1, 0, -1 };
int dy[] = { 0, -1, -1, -1 };

int i(int x, int y) {
  if (0 <= x && x < 20 && 0 <= y && y < 20)
    return xs[x][y];
  else
    return 0;
}

int j(int x, int y, int dx, int dy) {
  int ans = 1;
  for (int k = 0; k < 4; k++) {
    ans *= i(x + k * dx, y + k * dy);
  }
  return ans;
}

int f(int x, int y) {
  int ans = 0;
  for (int k = 0; k < 4; k++) {
    ans = max(ans, j(x, y, dx[k], dy[k]));
  }
  return ans;
}

int main() {
  ifstream file("inputs/011.txt");

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      file >> xs[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      ans = max(ans, f(i, j));
    }
  }

  cout << ans << "\n";
}
