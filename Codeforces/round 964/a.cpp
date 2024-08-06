// https://codeforces.com/contest/1999/problem/A

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
    int n; cin >> n;
    string ch = to_string(n);
    int sum = 0;
    for (char c : ch) {
      sum += c - '0';
    }

    cout << sum << endl;
  }

  return 0;
}