#include <bits/stdc++.h>
using namespace std;

int xs[10] = {
  0, 3, 3, 5, 4,
  4, 3, 5, 5, 4
};

int ys[10] = {
  0, 6, 6, 8, 8,
  7, 7, 9, 8, 8
};

int zs[10] = {
  0, 3, 6, 6, 5,
  5, 5, 7, 6, 6
};

int f(int n) {
  if (n < 100) {
    if (n < 10) return xs[n];
    if (n % 10 == 0) return zs[n / 10];
    if (n < 20) return ys[n - 10];
    return zs[n / 10] + xs[n % 10];
  } else {
    if (n % 100 == 0) return xs[n / 100] + 7;
    return xs[n / 100] + 10 + f(n % 100);
  }
}

int main() {
  int ans = 11;
  for (int i = 1; i < 1000; i++) {
    ans += f(i);
  }

  cout << ans << "\n";
}
