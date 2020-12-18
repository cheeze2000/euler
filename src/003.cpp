#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void f(ll& n, ll m) {
  while (n % m == 0) n /= m;
}

int main() {
  ll n = 600851475143;
  int ans = 0;

  if (n % 2 == 0) ans = 2;
  if (n % 3 == 0) ans = 3;

  f(n, 2);
  f(n, 3);

  for (ll i = 6; i * i <= n; i += 6) {
    if (n % (i - 1) == 0) ans = i - 1;
    f(n, i - 1);

    if (n % (i + 1) == 0) ans = i + 1;
    f(n, i + 1);
  }

  if (n > 1) ans = n;
  cout << ans << "\n";
}
