

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
    ll n;
    cin >> n;
    vector<ll> a(n);
    read(a);


    // declara duas pilhas
    vector<ll> s;
    vector<ll> secondSub;

    // percorre o vector principal
    for (ll i = 0; i < a.size(); i++)
    {

      // adiciona o primeiro numero do vector na primeira pilha
      if (s.size() == 0)
      {
        s.pb(a[i]);
        continue;
      }

      if (secondSub.size() == 0)
      {
        if (a[i] <= s[s.size() - 1])
        {
          s.pb(a[i]);
          continue;
        }
        else
        {
          secondSub.pb(a[i]);
          continue;
        }
      }


      // compara as diferenças para ir adicionando os números subsequentes em cada pilha
      ll diffFirst = a[i] - s[s.size() - 1];
      ll diffSecond = a[i] - secondSub[secondSub.size() - 1];

      if (diffFirst <= diffSecond && i > 0)
      {
        s.pb(a[i]);
      }

      if (diffFirst > diffSecond && secondSub.size() > 0)
      {
        secondSub.pb(a[i]);
      }
    }

    ll pen = 0;

    for (int i = 0; i < s.size() - 1; ++i)
    {
      if (s[i] < s[i + 1])
      {
        pen++;
      }
    }

    if (secondSub.size() > 1)
    {
      for (int i = 0; i < secondSub.size() - 1; ++i)
      {
        if (secondSub[i] < secondSub[i + 1])
        {
          pen++;
        }
      }
    }

    cout << pen << endl;
  }

  return 0;
}