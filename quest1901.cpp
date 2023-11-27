// https://codeforces.com/problemset/problem/1901/A


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

    // pegar os inputs
    ll n; cin >> n;
    ll x ; cin >> x;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    // adiciona todos os pontos ao array
    a.pb(x); a.pb(0);
    sort(a.begin(), a.end());

    // verifica a maior distância entre 2 pontos no array
    ll maiorD = 0;
    for (ll i = 0; i <= n ; i ++) {
      if ((a[i + 1] - a[i]) > maiorD) {
        maiorD = a[i + 1] - a[i];
      }
    }
    if (((a[a.size() - 1] - a[a.size() - 2]) * 2) > maiorD) {
      maiorD = ((a[a.size() - 1] - a[a.size() -  2]) * 2);
    }

    cout << maiorD << endl;
  }

  return 0;
}

