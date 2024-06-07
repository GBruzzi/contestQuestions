// https://codeforces.com/contest/1692/problem/B

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define read(x)        \
  for (auto &qw : (x)) \
    cin >> qw;
 
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int main() {
  ll t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<ll> v(n);
    read(v);

    set<ll> set;
    for (ll i : v) {
      set.insert(i);
    }

    int res = set.size();
    int op = v.size() - set.size();
    if (op % 2) {
      res --;
    }

    cout << res << endl;

  }

  return 0;
}