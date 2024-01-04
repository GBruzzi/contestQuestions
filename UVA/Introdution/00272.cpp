// https://vj.csgrandeur.cn/ee5637de1402ee224201032471abdfc7?v=1704290133

#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;


int main() {
  string frase;
  int cont = 1;

   while (getline(cin, frase)) {

        for (char c : frase) {
          if (c == '"') {
            if (cont % 2 == 0) {
              cout << "''";
              cont ++;
            } else {
              cout << "``";
              cont ++;
            }           
          } else {
            cout << c ;
          }
        }

       cout << '\n';
    }

  return 0;
}