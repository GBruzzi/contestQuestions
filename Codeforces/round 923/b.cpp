// https://codeforces.com/contest/1927/problem/B

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
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> v(n);
    read(v);

    vector<vector<char>> m(n + 1);

    for (char a = 'a'; a <= 'z'; a++) {
      m[0].pb(a);
    }

    for (int i = 0; i < n; i ++) {
      cout << m[v[i]].back();
      m[v[i] + 1].pb(m[v[i]].back());
      m[v[i]].pop_back();
    }

    cout << endl;
  }

  return 0;
}