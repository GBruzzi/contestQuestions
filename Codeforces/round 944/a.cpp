// https://codeforces.com/contest/1971/problem/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;

    if (x > y)
    {
      cout << y << " " << x << endl;
      continue;
    }

    cout << x <<" " << y << endl;
  }

  return 0;
}
