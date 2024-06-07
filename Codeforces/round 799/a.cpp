// https://codeforces.com/contest/1692/problem/A

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

int main() {
  ll t; cin >> t;
  while (t--) {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int res = 0;
    if (b > a)
      res++;

    if (c > a)
      res++;

    if (d > a)
      res++;

    cout << res << endl;

  }

  return 0;
}