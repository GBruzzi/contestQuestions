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
    int a,b,c;
    cin >> a >> b >> c;

    if (a < b && b < c) {
      cout << "STAIR" << endl;
      continue;
    }

    if (b > a && b > c) {
      cout << "PEAK" << endl;
      continue;
    }

    cout << "NONE" << endl;
  }

  return 0;
}
