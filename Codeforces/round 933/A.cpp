// https://codeforces.com/contest/1941/problem/A

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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> left(n);
    read(left);
    vector<int> right(m);
    read(right);

    int ways = 0;

    for (int i = 0 ; i < left.size(); i ++){
      for (int o = 0; o < right.size(); o ++) {
        if ((left[i] + right[o]) <= k ) {
          ways++;
        }
      }
    }

    cout << ways << endl;

  }

  return 0;
}
