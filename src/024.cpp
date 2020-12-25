#include <bits/stdc++.h>
using namespace std;

int main() {
  string xs = "0123456789";

  int a = 0;
  do {
    a++;
    if (a == 1) break;
  } while (next_permutation(xs.begin(), xs.end()));

  cout << xs << "\n";
}
