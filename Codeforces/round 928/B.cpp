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
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> grid[i][j];
      }
    }

    bool finish = false;

    for (int i = 0; i < n; i++)
    {
      if (finish)
      {
        break;
      }
      for (int j = 0; j < n; j++)
      {
        if (grid[i][j] == '1')
        {

          if (grid[i + 1][j - 1] == '1')
          {
            cout << "TRIANGLE" << endl;
            finish = true;
            break;
          }

          if (grid[i + 1][j] == '0')
          {
            cout << "TRIANGLE" << endl;
            finish = true;
            break;
          }
          else
          {
            cout << "SQUARE" << endl;
            finish = true;
            break;
          }
        }
      }
    }

    
  }
  return 0;
}