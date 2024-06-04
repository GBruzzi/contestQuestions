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
    string s;
    cin >> s;

    string horas;
    horas += s[0];
    horas += s[1];

    string min;
    min += s[3];
    min += s[4];

    int hr = stoi(horas);
    string comp;

    if (hr < 12)
    {
      comp = " AM";
      if (hr == 0)
        horas = "12";
    }
    else
    {
      comp = " PM";
      if (hr > 12)
        horas = '0' + to_string(hr - 12);
    }

    string ans = horas + ':' + min + comp;

    cout << ans << endl;
  }

  return 0;
}
