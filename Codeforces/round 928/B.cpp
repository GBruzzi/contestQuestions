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
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> grid[i][j];
      }
    }

    string answer = "UNKNOWN"; // Inicializa com "UNKNOWN" e atualiza conforme necessário

    for (int i = 0; i < n - 1; i++) // Ajuste no limite para evitar índices fora do vetor
    {
      for (int j = 0; j < n - 1; j++) // Ajuste no limite para evitar índices fora do vetor
      {
        if (grid[i][j] == '1')
        {
          if (grid[i + 1][j] == '0' || grid[i + 1][j - 1] == '0') // Correção na condição
          {
            answer = "TRIANGLE";
            break;
          }

          if (grid[i + 1][j - 1] == '1')
          {
            answer = "TRIANGLE";
            break;
          }

          answer = "SQUARE";
          break;
        }
      }

      if (answer != "UNKNOWN") // Se a resposta foi determinada, encerra o loop externo
        break;
    }

    cout << answer << endl; // Imprime a resposta no final de cada caso de teste
  }

  return 0;
}
