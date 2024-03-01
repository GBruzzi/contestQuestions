// https://codeforces.com/contest/1933/problem/A

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
    int n; cin >> n;
    vector<int> v(n);

    read(v);

    ll sum = 0;
    for (int c : v) {
      
      sum += abs(c);
    }

    cout << sum << endl;
  }

  return 0;
}