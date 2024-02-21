// https://codeforces.com/contest/1926

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

  while (t--)
  {
    string s; cin >> s;

    int quantA = 0;
    int quantB = 0;

    for (char c : s) {
      if (c == 'A') {
        quantA++;
        continue;
      }

      quantB++;
    }

    if (quantA > quantB) {
      cout << "A" << endl;
      continue;
    }

    cout << "B" << endl;
  }

  return 0;
}