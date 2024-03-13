//

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

    bool can = true;

    for (int i = 0; i < v.size() - 2; i++)
    {
      if (v[i] < 0)
      {
        can = false;
        break;
      }

      int operations = v[i];
      v[i + 1] -= operations * 2;
      v[i + 2] -= operations;
      v[i] = 0;
    }

    if (v[v.size() - 2] != 0 || v[v.size() - 1] != 0) {
      can = false;
    }

    if (can)
    {
      cout << "yes" << endl;
      continue;
    }

    cout << "no" << endl;
  }

  return 0;
}
