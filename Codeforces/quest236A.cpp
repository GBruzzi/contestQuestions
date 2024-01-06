// https://codeforces.com/contest/236/problem/A

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

  string s;
  cin >> s;
  vector<char> diff;

  for (char c : s)
  {
    bool present = false;

    for (char car : diff)
    {
      if (c == car)
      {
        present = true;
        break;
      }
    }

    if (!present)
    {
      diff.pb(c);
    }
  }



  if (diff.size() % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else
  {
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}