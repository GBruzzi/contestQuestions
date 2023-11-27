// https://codeforces.com/problemset/problem/1899/A

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
  ll t; cin >> t;

  while (t--) {
    ll n; cin >> n;

    if (n % 3 == 2 || n % 3 == 1) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }
  }

  return 0;
}

