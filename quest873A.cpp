// https://codeforces.com/problemset/problem/873/A

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
  ll n; cin >> n;
  ll k; cin >> k;
  ll x; cin >> x;
  ll res = 0;

  vector<ll> v(n );

  for (ll i = 0; i < v.size(); i ++) {
    cin >> v[i];    
  }

  // descobrir quanto tempo ela gasta nas tasks que faz mais rapidamente
  res = k * x;

  // calcular o resto do tempo das tasks somando

  for (ll i = 0; i < n - k; i ++) {
    res += v[i];
  }

  cout << res ;

  return 0;
}