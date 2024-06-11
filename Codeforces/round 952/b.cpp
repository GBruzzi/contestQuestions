// https://codeforces.com/contest/1985/problem/B

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;

    int maiorS = 0;
    int number;
    for (int i = 2; i <= n; i ++) {
      int sum = i;

      int temp = i;
      int cont = 2;

      while ((temp * cont) <= n) {
        sum += temp * cont;
        cont++;
      }

      if (sum > maiorS) {
        maiorS = sum;
        number = temp;
      }

    }

      cout << number << endl;

  }


  return 0;
}