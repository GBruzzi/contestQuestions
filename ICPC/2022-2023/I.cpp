// https://codeforces.com/gym/103960/problem/I

#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v(8);
  for (int i = 0; i < 8; i ++) {
    cin >> v[i];
  }

  for (int c : v)
  {
    if (c == 9)
    {
     cout << 'F';
     return 0;
    }
  }

  cout << 'S';

  return 0;
}

