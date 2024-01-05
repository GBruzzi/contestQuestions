// https://codeforces.com/contest/1916/problem/B

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
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;

  while (t--)
  {
    ll a, b;
    cin >> a >> b;

    ll mmc = (a * b) / __gcd(a, b);

    if (a == 1)
    {
      cout << b * b << endl;
      continue;
    }

    if (mmc == b)
    {
      for (ll i = 2; i * i <= mmc; ++i)
      {
        if (mmc % i == 0)
        {
          cout << mmc * i << endl;
          break;
        }
      }
      continue;
    }

    cout << mmc << endl;
  }

  return 0;
}