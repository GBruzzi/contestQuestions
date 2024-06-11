// https://codeforces.com/contest/1985/problem/D

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
  int t;
  cin >> t;
  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> matriz(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> matriz[i][j];
      }
    }

    int x, y;
    bool find = false;
    for (int i = 0; i < n; i++)
    {
      if (find)
        break;
      for (int j = 0; j < m; j++)
      {
        if (matriz[i][j] == '#')
        {
          if ((i + 1) == n || (j + 1) == m)
          {
            x = i + 1;
            y = j + 1;
            find = true;
            break;
          }

          if (matriz[i + 1][j] == '.')
          {
            x = i + 1;
            y = j + 1;
            find = true;
            break;
          }

          if (find)
            break;

          int cont = 1;
          while (true)
          {

            if (matriz[1 + cont][j + 1] == '.')
            {
              x = (i + 1) + (cont + 1)/ 2;
              y = j + 1;
              find = true;
              break;
            }

            cont++;
          }

          if (find)
            break;
        }
      }
    }

    cout << x << " " << y << endl;
  }

  return 0;
}