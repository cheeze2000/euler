#include <bits/stdc++.h>
using namespace std;

int p(double n) {
  int m = n * (log(n) + log(log(n)));
  vector<bool> xs(m, true);
  xs[0] = false;
  xs[1] = false;

  int c = 0;
  for (int i = 2; i < m; i++) {
    if (!xs[i]) continue;
    if (++c == n) return i;

    for (int j = i * 2; j < m; j += i) {
      xs[j] = false;
    }
  }

  return 0;
}

int main() {
  double n = 10001;
  cout << p(n) << "\n";
}
