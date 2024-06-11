// https://codeforces.com/contest/1692/problem/C

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

int main() {
  int t; cin >> t;
  while (t--) {
     vector<vector<char>> matriz(8, vector<char>(8));
     for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        cin >> matriz[i][j];
      }
    }


    int rw, cl;
    bool find = false;
    for (int i = 1; i < 7; i++)
    {
      if (find) 
        break;
      for (int j = 1; j < 7; j++)
      { 
        if (matriz[i][j] == '#') {
          if ((matriz[i - 1][j + 1] == '#') && (matriz[i - j][j - 1] == '#')) {
            rw = i + 1;
            cl = j + 1;
            find = true;
            break;
          }
        }
      }
    }


    cout << rw << " " << cl << endl;
   }

  return 0;
}