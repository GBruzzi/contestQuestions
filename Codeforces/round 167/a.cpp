// https://codeforces.com/contest/272/problem/A

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

// descobrir posição atual e a posição da menina, ir adicionando 1,2...5 e ver se é igual a pos dela
// senao, res ++;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> v(n);

  ll sum = 0;
  for (ll i = 0; i < v.size(); i++)
  {
    cin >> v[i];
    sum += v[i];
  }
  
  int nTot = n + 1;
  int moves;
  if (sum < (nTot )) {
    moves = sum - 1;
  } else {
    moves = (sum - 1) % nTot;
  }

  vector<ll> pos;

  for (int i = 0; i < nTot; i ++) {
    pos.pb(i);
  }


  int ways = 0;


  for (int i = 0; i < 5; i ++) {
    moves = (moves +1) % pos.size();
    if (pos[moves] != 0) {
      ways ++;
    }
  }

  cout << ways;

  return 0;
}