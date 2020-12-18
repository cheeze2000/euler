#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(int i, string& xs) {
  ll n = 1;
  for (int j = 0; j < 13; j++) {
    n *= xs[i + j] - '0';
  }

  return n;
}

int main() {
  ifstream file("inputs/008.txt");
  ll ans = 0;
  string xs;

  string s;
  while (file >> s) xs += s;

  for (int i = 0; i <= xs.size() - 13; i++) {
    ans = max(ans, f(i, xs));
  }

  cout << ans << "\n";
}
