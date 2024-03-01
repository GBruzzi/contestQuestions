// https://codeforces.com/contest/1933/problem/B

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

    if (v.size() == 1)
    {
      cout << 1 << endl;
      continue;
    }
    
    if (v.size() == 0) {
      cout << 0 << endl;
      continue;
    }

    ll sum = 0;
    for (ll c : v)
    {
      sum += c;
    }

    if (sum % 3 == 0)
    {
      cout << 0 << endl;
      continue;
    }

    if (sum % 3 == 2)
    {
      cout << 1 << endl;
      continue;
    }

    bool certo = false;
    for (ll c : v)
    {
      ll teste = sum - c;
      if (teste % 3 == 0)
      {
        cout << 1 << endl;
        certo = true;
        break;
      }
    }

    if (!certo)
    {
      cout << 2 << endl;
      continue;
    }
  }

  return 0;
}