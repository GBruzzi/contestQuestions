// https://codeforces.com/contest/1722/problem/B

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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r;
    cin >> r;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'G')
        s[i] = 'B';

      if (r[i] == 'G')
        r[i] = 'B';
    }

    if (s == r)
    {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;
  }

  return 0;
}