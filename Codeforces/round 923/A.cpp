// https://codeforces.com/contest/1927/problem/A

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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int fir = 0;
    int sec = 0;


    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'B') {
        fir = i;
        break;
      }
    }

    for (int j = s.size() - 1; j >= 0; j--) {
      if (s[j] == 'B') {
        sec = j;
        break;
      }
    }

    if (fir == sec) {
      cout << 1 << endl;
      continue;
    }
    
    cout << (sec - fir) + 1 << endl;

  }

  return 0;
}