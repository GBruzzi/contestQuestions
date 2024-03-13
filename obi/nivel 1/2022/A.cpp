#include <bits/stdc++.h>
using namespace std;

int main() {
  int d; cin >> d;
  int a; cin >> a;
  int n; cin >> n;

  int dias = 32 - n; 
  if (n > 15) {
    n = 15;
  }
  int res = dias * (d + a * (n-1) );


  cout << res;
}