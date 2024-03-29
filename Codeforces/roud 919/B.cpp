

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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    read(v);

    sort(v.begin(), v.end());

    ll sum = 0;
    for (int i = 0; i <= k; i++)
    {
      v.pop_back();
      if (v.size() != 0)
      {
        v[v.size() - 1] *= -1;
      }
    }

    if (v.size() != 0)
    {
      for (int c : v)
      {
        sum += c;
      }

      cout << sum << endl;
      continue;
    }

    cout << 0 << endl;
  }

  return 0;
}