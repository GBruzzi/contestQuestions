// https://codeforces.com/contest/492/problem/B

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define read(x)        \
  for (auto &qw : (x)) \
    cin >> qw;
 
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;


int main() {
    ll n, l;
    cin >> n >> l;

    vector<int> v(n);
    read(v);

     if (n == 1) {
        long double dist = max((long double)v[0], (long double)(l - v[0]));
        cout << fixed << setprecision(10) << dist;
        return 0;
    }

    sort(v.begin(), v.end());

    int maiorD = v[1] - v[0];

    for (int i = 1; i < v.size() - 1; i ++) {
        int d = v[i + 1] - v[i];
        if (d > maiorD) {
            maiorD = d;
        }
    }

    long double dist = maiorD / 2.0;

    if (v[0] != 0) {
       if (v[0] > dist) {
        dist = v[0];
       } 
    }

    
    if (v[v.size() - 1] != l) {
      if (l - v[v.size() - 1] > dist) {
        dist = l - v[v.size() - 1];
      }
    }

    cout << fixed << setprecision(10) << dist;

    return 0;
}