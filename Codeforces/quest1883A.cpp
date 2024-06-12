// https://codeforces.com/problemset/problem/1883/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define read(x) for(auto& qw : (x)) cin >> qw;

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

int main() {
  ll t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int ans = 0;

    int n1 = s[0] - '0';
    if (n1 == 0)
      n1 = 10;

    int d1 = abs(n1 - 1);
    ans += d1 + 1;

    for (int i = 1; i < 4; i ++) {
      int atual = s[i - 1] - '0';
      if (atual == 0)
        atual = 10;

      int prox = s[i] - '0';
      if (prox == 0)
        prox = 10;

      int d = abs(atual - prox);
      ans += d + 1;
    }

    cout << ans << endl;
  }
  return 0;
}