// https://codeforces.com/problemset/problem/1873/C

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

    // receber o input como matriz
    vector<vector<char>> matriz(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        cin >> matriz[i][j];
      }
    }
    ll points = 0;

    // percorrer a matriz e avaliar quantos pontos o usuário fez em cada jogada
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if (matriz[i][j] == 'X')
        {
          if (i == 0 || i == 9 || j == 0 || j == 9)
          {
            points += 1;
          }
          else if (i == 1 || i == 8 || j == 1 || j == 8)
          {
            points += 2;
          }
          else if (i == 2 || i == 7 || j == 2 || j == 7)
          {
            points += 3;
          }
          else if (i == 3 || i == 6 || j == 3 || j == 6)
          {
            points += 4;
          }
          else
          {
            points += 5;
          }
        }
      }
      
    }
    cout << points << endl;
    
  }
  return 0;
}