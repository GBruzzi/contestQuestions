#include <bits/stdc++.h>
using namespace std;

int main()
{
  int d;
  cin >> d;

  int res = (d - 3) % 8;
  if (res == 3)
  {
    cout << 1;
    return 0;
  }
  if (res == 4)
  {
    cout << 2;
    return 0;
  }

  cout << 3;

  return 0;
}