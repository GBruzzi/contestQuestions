// https://vj.csgrandeur.cn/c546171fac465c50c48fca82f5074093?v=1702901302

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  int cont = 0;

  while (t--) {
    cont ++;
    int sum = 0; int sal;

    vector<int> v(3);

    for (int i = 0; i < v.size(); i ++) {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

  cout << "Case " << cont << ": " << v[1]<< endl;    

  }
  return 0;
}