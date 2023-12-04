// https://codeforces.com/problemset/problem/1791/B

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;

int main() {
  int t; 
  cin >> t;

  while (t--) {
    ll n ; 
    cin >> n;

    string s ; 
    cin >> s;

    ll posHor = 0;
    ll posVer = 0;

    bool passedCandy = false; 

    for (ll i = 0; i < s.size(); i ++) {
      if (s[i] == 'L') {
        posHor --;
      }

      if (s[i] == 'U') {
        posVer ++;
      }

      if (s[i] == 'R') {
        posHor ++;
      }

      if (s[i] == 'D') {
        posVer --;
      }

      if (posVer == 1 && posHor == 1) { 
        passedCandy = true;
        break;
      }
    }

    if (passedCandy) {
       cout << "YES" << endl;
    } else {
       cout << "NO" << endl;
    }
  }

  return 0;
}
