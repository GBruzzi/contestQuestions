// https://codeforces.com/problemset/problem/1907/A

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define read(x) for(auto& qw : (x)) cin >> qw;

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

int main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;

    string rows = "abcdefgh";
    for (int i = 0; i <8; i ++) {
      if (rows[i] == s[0])
        continue;

      cout << rows[i] << s[1] << endl;
    }

    string l = "12345678";

    for (int i = 0; i < 8; i ++) {
      if (l[i] == s[1])
        continue;

      cout << s[0] << l[i] << endl;
    }

  }

  return 0;
}