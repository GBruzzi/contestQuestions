#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> matriz(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  int linha, coluna, value;
  int maiorSum = 0;
  int actualSum = 0;
  bool find = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      actualSum += matriz[i][j];

      if (matriz[i][j] == 0)
      {
        linha = i + 1;
        coluna = j + 1;
        find = 1;
      }
    }

    if (find)
    {
      if (linha == 1) {
        for (int o = 0; o < n; o ++) {
          maiorSum += matriz[linha + 1][o];
        }
      }
      value = maiorSum - actualSum;
      break;
    }

    if (actualSum > maiorSum)
    {
      maiorSum = actualSum;
      actualSum = 0;
    }
  }

  cout << value << endl;
  cout << linha << endl;
  cout << coluna << endl;
}