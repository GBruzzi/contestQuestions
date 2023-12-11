// https://codeforces.com/problemset/problem/1842/A

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

    // pegar os inputs e somar o poder de cada monstro

    ll n ; cin >> n; ll m; cin >> m;

    vector<ll> vecN(n);

    ll sumN = 0;
    ll sumM = 0;

    for (ll i = 0; i < vecN.size(); i ++) {
      cin >> vecN[i];
      sumN += vecN[i];
    }

    vector<ll> vecM(m);

    for (ll i = 0; i < vecM.size(); i ++) {
      cin >> vecM[i];
      sumM += vecM[i];
    }

    // verificar quem tem o monstro mais poderoso

    if (sumN > sumM) {
      cout << "Tsondu" << endl;
    } else if (sumM > sumN) {
      cout << "Tenzing" << endl;
    } else {
      cout << "Draw" << endl;
    }

  }

  return 0;
}