// https://codeforces.com/contest/978/problem/A

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
  
  int n; cin >> n;
  vector<int> v(n);
  read(v);

  vector<int> resp;
  

  for (int i = n - 1; i >= 0; i--) {
    bool isPresent = false;
    for (int c : resp) {
        if (v[i] == c) {
            isPresent = true;
            break;  
        }
    }
    if (!isPresent) {
        resp.pb(v[i]);  
    }
}
 

  cout << resp.size() << endl;

  for (int i = resp.size() - 1; i >= 0; i--) {
    cout << resp[i] << " ";
  }

  return 0;
}