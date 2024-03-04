// https://codeforces.com/gym/103960/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int sumJohn = 0;
  int sumMary = 0;
  int n;
  cin >> n;
  int n1, n2;
  cin >> n1 >> n2;

  if (n1 == 11 || n1 == 12 || n1 == 13)
  {
    sumJohn += 10;
  }
  else
  {
    sumJohn += n1;
  }

  if (n2 == 11 || n2 == 12 || n2 == 13)
  {
    sumJohn += 10;
  }
  else
  {
    sumJohn += n2;
  }

  int n3, n4;
  cin >> n3 >> n4;

  if (n3 == 11 || n3 == 12 || n3 == 13)
  {
    sumMary += 10;
  }
  else
  {
    sumMary += n3;
  }

  if (n4 == 11 || n4 == 12 || n4 == 13)
  {
    sumMary += 10;
  }
  else
  {
    sumMary += n4;
  }

  vector<int> v(n);
  int sumCommon = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];

    if (v[i] == 11 || v[i] == 12 || v[i] == 13)
    {
      sumCommon += 10;
    }
    else
    {
      sumCommon += v[i];
    }
  }

  // para ter todas as cartas já jogadas
  v.push_back(n1);
  v.push_back(n2);
  v.push_back(n3);
  v.push_back(n4);

  int totJohn = sumJohn + sumCommon;
  int totMary = sumMary + sumCommon;

  if (totJohn < 14 && totMary < 13) {
    cout << -1 << endl;
    return 0;
  }

  int restJohn = 24 - totJohn;
  int restMary = 23 - totMary;

  int res;

  if (restJohn > restMary)
  {
    res = restMary;
  }
  else
  {
    res = restJohn;
  }

  bool finish = false;

  while (!finish)
  {
    int cont = 0;

    for (int c : v)
    {
      if (res == c)
      {
        cont++;
      }
    }

    if (cont < 4)
    {
      finish = true;
    }
    else
    {
      res++;
    }
  }

  if (totMary + res > 23) {
    cout << -1 << endl;
    return 0;
  }

  cout << res << endl;

  return 0;
}