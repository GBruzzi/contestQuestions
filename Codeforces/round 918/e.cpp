// https://codeforces.com/contest/1915/problem/E

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

    // inicializa o vector
    vector<ll> v(n);
    read(v);

    // multiplica os indices impares por -1 e soma
    ll sum = 0;
    vector<ll> vSum;
    for (ll i = 0; i < v.size(); ++i)
    {
      if (i % 2 != 0)
      {
        v[i] *= -1;
      }
      sum += v[i];
      vSum.pb(sum);
    }

    // cria um set e vai adicionando os valores do vetor da soma 
    set<ll> uniqSet;
    uniqSet.insert(0);

    for (ll n : vSum) {
      uniqSet.insert(n);
    }

    // se o set ter o lenght diferente do vsum, significa que tivemos numeros e repetidos
    if (uniqSet.size() != (vSum.size() + 1))
    {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;
  }

  return 0;
}