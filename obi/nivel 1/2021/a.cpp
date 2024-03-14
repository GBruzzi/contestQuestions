#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<char> games(6);
  for (int i = 0; i < 6; i ++) {
    cin >> games[i];
  }

  int wins = 0;
  for (char c : games) {
    if (c == 'V') {
      wins ++;
    }
  }

  if (wins > 4) {
    cout << 1;
    return 0;
  }

  if (wins > 2) {
    cout << 2;
    return 0;
  }

  if (wins > 0) {
    cout << 3;
    return 0;
  }

  cout << -1;
  return 0;

}