// https://vjudge.net/problem/UVA-11799

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;

  int cont = 0;

  while (t--)
  {
    cont ++;

    int n;
    cin >> n;
    int maior = 0;
    vector<ll> v(n);

    for (ll i = 0; i < v.size(); i++)
    {
      cin >> v[i];
      if (v[i] > maior) {
        maior = v[i];
      }
    }

    cout << "Case " << cont << ": " << maior << endl;
  }

  return 0;
}
