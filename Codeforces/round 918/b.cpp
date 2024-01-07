#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    vector<vector<char>> matriz(3, vector<char>(3));
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin >> matriz[i][j];
      }
    }

    bool faltaA = true;
    bool faltaB = true;
    bool faltaC = true;

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (matriz[i][j] == '?') {
          for (int o = 0; o < 3; o ++) {
            if (matriz[i][o] == 'A') {
              faltaA = false;
            } else if (matriz[i][o] == 'B') {
              faltaB = false;
            } else if (matriz[i][o] == 'C') {
              faltaC = false;
            }
          }
        }
      }
    }

    if (faltaA) {
      cout << 'A' << endl;
      continue;
    }

    if (faltaB) {
      cout << 'B' << endl;
      continue;
    }

    cout << 'C' << endl;

  }

  return 0;
}
