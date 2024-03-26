// https://codeforces.com/contest/1945/problem/B

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

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    ll a; cin >> a;
    ll b; cin >> b;
    ll m; cin >> m;


    cout << ((m / a) + 1) + ((m / b) + 1) << endl;
  }

  return 0;
}
