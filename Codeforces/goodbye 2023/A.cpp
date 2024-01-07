// https://codeforces.com/contest/1916

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
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;



  while (t--)
  {
    ll productB = 1;
    ll n, k;
    cin >> n;
    cin >> k;

    vector<ll> b(n);

    for (ll i = 0; i < b.size(); i++)
    {
      cin >> b[i];
      productB *= b[i];
    }

    if (productB == 4294967296) {
      cout << "NO" << endl;
      continue;
    }

    int rest = 2023 % productB ;

    if  (rest != 0) {
      cout << "NO" << endl;
      continue;
    } 

    cout << "YES" << endl;
    vector<ll> res;
    
    int firstN = 2023 / productB;

    res.pb(firstN);

    for (int i = 1; i < k; i ++) {
      res.pb(1);
    }
    
    for (int i : res) {
      cout << i << " " ;
    }


    cout << endl ;
  }

  return 0;
}