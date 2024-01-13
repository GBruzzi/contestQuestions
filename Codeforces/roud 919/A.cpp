// https://codeforces.com/contest/1920/problem/A

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
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    ll menor = LINF;
    ll maior = 0;
    vector<ll> diff;

    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      ll x;
      cin >> x;

      if (a == 1)
      {
        if (menor != LINF)
        {
          if (x > menor)
          {
            menor = x;
          }
        }
        else
        {
          menor = x;
        }
      }

      if (a == 2)
      {
        if (maior != 0)
        {
          if (x < maior)
          {
            maior = x;
          }
        }
        else
        {
          maior = x;
        }
      }

      if (a == 3)
      {
        diff.pb(x);
      }
    }

    ll ways = 0;


    for (ll i = menor; i <= maior; i ++) {
      ways += 1;
    }

    ll diffNTira = 0;

    for (ll c : diff) {
      if (c < menor || c > maior) {
        diffNTira ++;
      }
    }

    ways -= (diff.size() - diffNTira);

    cout << ways << endl;
  }

  return 0;
}