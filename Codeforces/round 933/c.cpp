// https://codeforces.com/contest/1941/problem/C

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
  ll t;
  cin >> t;

  while (t--)
  {
    ll n; cin >> n;
    string s; cin >> s;


    ll ugly = 0;

    for (int i = 0; i < s.size(); i ++) {
      if (s[i] == 'm') {
        if (s[i + 1] == 'a') {
          if (s[i + 2] == 'p') {
            ugly++;
            i+=2;
            continue;
          }
        }
      }

      if (s[i] == 'p') {
        if (s[i + 1] == 'i') {
          if (s[i + 2] == 'e') {
            ugly++;
            i+=2;
          }
        }
      }
    }

    cout << ugly << endl;
  }

  return 0;
}
