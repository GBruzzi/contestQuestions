// https://codeforces.com/contest/1945/problem/A

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
    ll c; cin >> c;

    int ans = 0;
    ans += a;

    int modb = b % 3;
    if ((modb) > 0 &&  (((modb) + c) < 3)) {
      cout << -1 << endl;
      continue;
    }


    ans += (b / 3) + ((modb + c) / 3) + ((modb + c) % 3 != 0 ? 1 : 0);

    cout << ans << endl;
    continue;
  }

  return 0;
}
