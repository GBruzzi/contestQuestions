// um algoritmo para transformar um número decimal em binário

#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string ans;

  while (n >= 2) {
    int rest = n % 2;
    n /= 2;
    ans += to_string(rest);
  }

  ans += to_string(n);

  string ansF;
  for (int i = ans.size() - 1; i >= 0; i --) {
    ansF += ans[i];
  }

  cout << ansF << endl;

  return 0;
}