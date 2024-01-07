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

  ll n1, n2;

  while (cin >> n1 >> n2)
  {
    ll diff = n2 - n1;
    ll diff2 = n1 - n2;

    if (diff > diff2) {
      cout << diff << endl;
    } else {
      cout << diff2 << endl;
    }
    
  }

  return 0;
}