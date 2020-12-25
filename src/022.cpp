#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream file("inputs/022.txt");
  vector<string> xs;

  string s;
  while (getline(file, s, '"')) {
    if (s == "," || s == "") continue;
    xs.push_back(s);
  }

  sort(xs.begin(), xs.end());

  int ans = 0;
  for (int i = 0; i < xs.size(); i++) {
    int s = 0;
    for (char c : xs[i]) {
      s += c - 'A' + 1;
    }

    ans += (i + 1) * s;
  }

  cout << ans << "\n";
}
