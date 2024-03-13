#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int m; cin >> m;
  int s; cin >> s;

  bool can = 0;
  int res;

  for (int i = m; i >= n; i --) {
    int sum = 0;
    int number = i;

    while (number > 0) {
      int digit = number % 10;
      sum += digit;
      number /= 10;
    }

    if (sum == s) {
      can = 1;
      res = i;
      break;
    }
  }

  if (can) {
    cout << res << endl;
    return 0;
  }

  cout << -1 << endl;

  return 0;
}