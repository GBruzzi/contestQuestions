#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char f;
  cin >> f;
  vector<vector<char>> matriz(n, vector<char>(n));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  matriz[0][0] = '*';

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (matriz[i][j] <= f)
      {
        if (i > 0)
        {
          if (matriz[i - 1][j] == '*')
          {
            matriz[i][j] = '*';
            continue;
          }
        }

        if (j < n - 1)
        {
          if (matriz[i][j + 1] == '*')
          {
            matriz[i][j] = '*';
            continue;
          }
        }

        if (i < n - 1)
        {
          if (matriz[i + 1][j] == '*')
          {
            matriz[i][j] = '*';
            continue;
          }
        }

        if (j > 0)
        {
          if (matriz[i][j - 1] == '*')
          {
            matriz[i][j] = '*';
            continue;
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matriz[i][j];
    }
    cout << endl;
  }

  return 0;
}