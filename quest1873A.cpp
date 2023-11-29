// https://codeforces.com/problemset/problem/1873/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;


int main() {
  int t; cin >> t;

  while (t--) {
    string s; cin >>  s;

    if (s == "abc") {
      cout << "YES" << endl;
      continue;
    }

    int errors = 0;

    if (s[0] != 'a') {
      errors ++;
    }

    if (s[1] != 'b') {
      errors ++;
    }

    if (s[2] != 'c') {
      errors ++;
    }

    if (errors == 2) {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;
  }

  return 0;
}