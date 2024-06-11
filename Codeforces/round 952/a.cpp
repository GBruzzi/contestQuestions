// https://codeforces.com/contest/1985/problem/0

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
    string a, b;
    cin >> a >> b;

    char temp = b[0];
    b[0] = a[0];
    a[0] = temp;

    cout << a << " " << b << endl;
  }

  return 0;
}