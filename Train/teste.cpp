#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 12; int b = 6;

  int menor = a;
  if (b < a)
  {
    b = menor;
  }

  int ans = 0;

  for (int i = 1; i <= menor; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      cout << i << " ";
    }
  }

  return 0;
}