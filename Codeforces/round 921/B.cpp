// https://codeforces.com/contest/1925/problem/B

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
    ll x, n;
    cin >> x >> n;

    if (x % n == 0)
    {
      cout << x / n << endl;
      continue;
    }

    ll resp = 1;
    for (int i = 1; i * i <= x; i++)
    {
      if (x % i == 0)
      {
        ll aux = x / i;
        ll temp = x - i * (n - 1);
        ll temp2 = x - aux * (n - 1);
        if (temp >= i and __gcd(temp, (ll)i) == i)
        {
          resp = max(resp, (ll)i);
        }
        if (temp2 >= aux and __gcd(temp2, aux) == aux)
        {
          resp = max(resp, aux);
        }
      }
    }
    cout << resp << endl;
  }

  return 0;
}