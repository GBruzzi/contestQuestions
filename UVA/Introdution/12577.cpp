// https://vj.csgrandeur.cn/c3714f67070606cb1d51a8ff2cec5a74?v=1704088674

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
  string s = "start";
  ll cases = 0;

  while (s != "*") {

    cin >> s;
    cases ++;

    if (s == "Hajj") {
      cout << "Case " << cases << ": Hajj-e-Akbar" << endl;
    } else if (s == "Umrah") {
      cout << "Case " << cases << ": Hajj-e-Asghar"  << endl;
    }
  }

  return 0;
}