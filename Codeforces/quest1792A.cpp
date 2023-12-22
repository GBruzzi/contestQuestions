// https://codeforces.com/problemset/problem/1792/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n; cin >> n;

    vector<ll> v(n);

    for (ll i = 0; i < v.size(); i ++) {
      cin >> v[i];
    }

    ll result = 0;
    ll quantUm = 0;

    for (ll i = 0; i < v.size(); i ++) {
      if (v[i] == 1) {
        quantUm ++;
      }
    }

    result = v.size();

    if (quantUm > 1) {
      result -= quantUm / 2;
    }
    cout << result << endl;

  }
  return 0;
}