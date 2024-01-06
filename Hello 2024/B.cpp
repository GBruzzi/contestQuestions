

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
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> b;

    // transformar em um array de 1 e -1
    for (char c : s)
    {
      if (c == '+')
      {
        b.pb(1);
      }
      else
      {
        b.pb(-1);
      }
    }

    ll sum = 0;

    for (ll n : b) {
      sum += n;    
    }
    
    cout << abs(sum) << endl;
  }

  return 0;
}