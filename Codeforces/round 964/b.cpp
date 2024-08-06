// https://codeforces.com/contest/1999/problem/B

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
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int res = 0;

    if (a1 > b1) {
      if (a2 >= b2) {
        res++;
      }
    }

    if (a1 > b2) {
      if (a2 >= b1) {
        res++;
      }
    }

    if (a2 > b1) {
      if (a1 >= b2) {
        res++;
      }
    }

    if (a2 > b2) {
      if (a1 >= b1) {
        res++;
      }
    }

    cout << res << endl;
  }

  return 0;
}
