// https://codeforces.com/problemset/problem/1828/A

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
  int t; cin >> t;

  while (t--) {

    int n, res;


    cin >> n;

    // calcular a somatória com a fórmula da PA
    res = (n*(n+1))/2;

    // definir o primeiro número
    ll bal =  1+(n-(res%n));
    cout<<bal<<" ";
    for(ll i = 2 ; i <= n ; i++) {
            cout<<i<<" ";
        }
        cout<<endl;

  }

  return 0;
}