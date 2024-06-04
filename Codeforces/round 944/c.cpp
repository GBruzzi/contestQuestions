// https://codeforces.com/contest/1971/problem/C

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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string res;

    for (int i = 1; i <= 12; i ++) {
      if(i == a || i == b)
        res += "a";
      
      if(i == c || i == d)
        res +="b";
    }

    if (res == "abab" || res == "baba") {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;

  }

  return 0;
}