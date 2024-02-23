// https://codeforces.com/gym/103960

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 1; i < s.size(); i++)
  {
    if (s[i] == 'a')
    {
      if (s[i - 1] == 'a')
      {
        if (s[i - 2] == 'a')
        {
          ans++;
          continue;
        }
        ans += 2;
      }
    }
  }

  cout << ans;

  return 0;
}