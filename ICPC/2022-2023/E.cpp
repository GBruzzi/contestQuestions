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


  // criar vector de balões já estourados
  vector<bool> marked;
  
  for (long long i = 0; i < v.size(); i ++) {
    marked.push_back(false);
  }

  long long ans = 0;

  for (long long i = 0; i < n; i++)
  {

    // verificar se determinado balão ja foi estourado
    bool present = false;
    for (long long o = 0; o < marked.size(); o++)
    {
      if (marked[i] == true)
      {
        present = true;
        break;
      }
    }

    if (present)
    {
      continue;
    }


    //estourar um balão e dar sequência
    ans++;
    marked[i] = true;
    v[i]--;
    for (long long j = i + 1; j < v.size(); j++)
    {

      // se a altura for zero, parar
      if (v[i] == 0)
      {
        break;
      }

      // se a altura for igual, estourar outro balão e marca - lo e diminuir a altura
      if (v[i] == v[j])
      {
        marked[j] = true;
        v[i]--;
      }
    }
  }


  cout << ans;

  return 0;
}