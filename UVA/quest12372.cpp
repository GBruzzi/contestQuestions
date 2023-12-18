// https://vjudge.net/problem/UVA-12372

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  int cont = 0;

  while (t--) {
  cont ++;

  int n; cin >> n;
  int w; cin >> w;
  int h; cin >> h;  


  if (n <= 20 && w <= 20 && h <= 20) {
    cout << "Case " << cont << ": good" << endl ;
    continue;
  }

  cout << "Case " << cont << ": bad" << endl;

  }
  return 0;
}
