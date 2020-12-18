#include <bits/stdc++.h>
using namespace std;

int main() {
  int m = 2e6;
  vector<bool> xs(m, true);
  xs[0] = false;
  xs[1] = false;

  long ans = 0;
  for (int i = 2; i < m; i++) {
    if (!xs[i]) continue;

    ans += i;
    for (int j = i * 2; j < m; j += i) {
      xs[j] = false;
    }
  }

  cout << ans << "\n";
}
