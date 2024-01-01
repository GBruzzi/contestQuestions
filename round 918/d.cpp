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
  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int cont = 0;
    int numTot = 0;

    for (ll i = 0; i < s.length(); i++)
    {
      numTot ++;
      cont++;
      cout << s[i];

      if (cont == 2 && (s.size() - numTot > 2))
      {
        if (s[i] == 'a' || s[i] == 'e' && s[2 + i] == 'a' || s[2 + i] == 'e')
        {
          cout << '.';
          cont = 0;
        }
      }

      if (cont == 3 && (s.size() > numTot))
      {
        cout << '.';
        cont = 0;
      }
    }
  }

  return 0;
}