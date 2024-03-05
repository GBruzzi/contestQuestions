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

  vector<long long> marked;
  long long ans = 0;

  for (long long i = 0; i < n; i++)
  {
    bool present = false;
    for (long long o = 0; o < marked.size(); o++)
    {
      if (v[i] == marked[o])
      {
        present = true;
        break;
      }
    }

    if (present)
    {
      continue;
    }

    ans++;
    marked.push_back(v[i]);
    v[i]--;
    for (long long j = i + 1; j < v.size(); j++)
    {

      if (v[i] == 0)
      {
        break;
      }

      if (v[i] == v[j])
      {
        marked.push_back(v[j]);
        v[i]--;
      }
    }
  }


  cout << ans;

  return 0;
}