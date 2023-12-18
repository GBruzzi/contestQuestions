// https://vjudge.csgrandeur.cn/problem/UVA-10300

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  

  while (t--)
  {

    int res = 0;

    int f;
    cin >> f;

    while (f--)
    {
      ll size;
      cin >> size;
      ll n;
      cin >> n;
      ll index;
      cin >> index;

      res += size * index  ;
    }

    cout << res << endl;
  }

  

  return 0;
}
