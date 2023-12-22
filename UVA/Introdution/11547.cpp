// https://vjudge.net/problem/UVA-11547

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;



    int res = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498);

    string numStr = to_string(res);

    cout << numStr[numStr.size() - 2] << endl;


  }
  return 0;
}

