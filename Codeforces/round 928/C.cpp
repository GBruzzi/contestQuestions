// https://codeforces.com/contest/1926/problem/C

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll res[200007];

ll S(ll x)
{
  ll sum = 0;
  while (x > 0)
  {
    ll digit = x % 10;
    sum += digit;
    x /= 10;
  }

  return sum;
}

int main()
{
  res[0] = 0;

  for (ll i = 1; i < 200007; i++)
  {
    res[i] = res[i - 1] + S(i);
  }

  ll t;
  cin >> t;
  while (t--)
  {
    ll x;
    cin >> x;
    cout << res[x] << endl;
  }
}