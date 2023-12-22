//  https://vjudge.net/problem/UVA-11172

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
    int a; cin >> a;
    int b; cin >> b;

    if (a < b) {
      cout << "<" << endl;
      continue;
    }

    if (a > b) {
      cout << ">" << endl;
      continue;
    }

    cout << "=" << endl;

  }

  return 0;
}

