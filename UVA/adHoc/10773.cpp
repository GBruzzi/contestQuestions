// https://vjudge.net/problem/UVA-10773

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

  int t;
  cin >> t;

  int cont = 0;

  while (t--)
  {
    cont++;
    double d, v, u;
    cin >> d >> v >> u;

    if (v > u || u == 0 || d == 0)
    {
      cout << "Case " << cont << " can't determine" << endl;
      continue;
    }

    int fastWay = d / u;
    int shortWay = d / sqrt(u * u - v * v);

    cout << fixed << std::setprecision(3);
    cout << "Case " << cont << ": " << static_cast<double>(shortWay - fastWay) << std::endl;
  }

  return 0;
}