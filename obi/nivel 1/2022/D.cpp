#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  long long s; cin >> s;
  vector<int> v(n);


  int ways = 0;

  for (int i =0; i < n; i ++) {
    cin >> v[i];
  }

  for (int i = 0; i < v.size(); i ++) {
    int sum = 0;
    for (int j = i; j < v.size(); j ++) {
      sum += v[j];

      if (sum == s) {
        ways++;
      }
    }
  }


  cout << ways << endl;

  return 0;
}