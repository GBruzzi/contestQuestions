// https://codeforces.com/gym/103960/problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  vector<long long> v(n);

  for (long long i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  // criar vector de tracking de arrows
  vector<int> arrows;

  long long ans = 0;

  for (long long i = 0; i < n; i++)
  {
    // fazendo o tracking das arrows
    bool present = false;
    for (long long j = 0; j < arrows.size(); j++)
    {
      if (arrows[j] == 0) {
        continue;
      }
      int actualArrow = arrows[j] - 1;
      if (v[i] == actualArrow)
      {
        arrows[j]--;
        arrows.push_back(v[i]);
        present = true;
      }
    }

    if (present)
    {
      continue;
    }

    ans++;
    arrows.push_back(v[i]);
  }

  cout << ans;

  return 0;
}