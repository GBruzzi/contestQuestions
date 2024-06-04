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
    int n;
    cin >> n;
    vector<vector<char>> matriz(2 * n, vector<char>(2 * n));
    matriz[0][0] = '#';
    matriz[0][1] = '#';
    matriz[1][0] = '#';
    matriz[1][1] = '#';


    for (int i = 0; i < 2 * n; i++)
    {
      for (int j = 0; j < 2 * n; j++)
      {
        if ()
        {
          matriz[i][j] = '.';
          matriz[i][j + 1] = '.';
          matriz[i + 1][j] = '.';
          matriz[i + 1][j + 1] = '.';
        }
        else
        {
          matriz[i][j] = '#';
          matriz[i][j + 1] = '#';
          matriz[i + 1][j] = '#';
          matriz[i + 1][j + 1] = '#';
        }
      }
    }

    for (int i = 0; i < matriz.size(); i++)
    {
      for (int j = 0; j < matriz.size(); j++)
      {
        cout << matriz[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}
