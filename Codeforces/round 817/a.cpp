// https://codeforces.com/contest/1722/problem/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;


int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    string name = "Timur";

    if (s.size() != 5) {
      cout << "NO" << endl;
      continue;
    }

    bool teste = true;
    for (int i = 0; i < name.size(); i ++) {
      if (!teste)
        break;
      for (int j = 0; j < s.size(); j ++) {
        if (s[j] == name[i]) {
          break;
        }

        if (j == s.size() - 1) {
          teste = false;
          break;
        }
      }
    }

    if (teste) {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;

  }


  return 0;
}