// https://codeforces.com/contest/1985/problem/C


#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define read(x) for(auto& qw : (x)) cin >> qw;

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

int main() {
  ll t; cin >> t;
  ll n; cin >> n;
  vector<ll> v(n);
  read(v);

  int ans = 0;
  for (int i = 0; i < v.size(); i ++) {
   for (int j = 0; j <= i; j ++) {
    int sum = 0;
    int cont = 0;
    for (int o = 0; o <= j; o ++) {
      if (o == cont)
        continue;

      sum += v[o];
    }
    cont++;
    if (sum == v[j])
      ans++;
   }

   
  }

  cout << ans << endl;


  return 0;
}