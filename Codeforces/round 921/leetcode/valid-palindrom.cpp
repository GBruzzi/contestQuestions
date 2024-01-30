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

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 998244353;
const ll MODhash = 41083620229;
const ll NO_OPERTATION = -1;
const double eps = 1e-8;
const int MAX = 3000000;
const int LOG = 20;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s = "0P";
  string sForm;

  for (char c : s)
  {

    if (tolower(c) >= 'a' && tolower(c) <= 'z')
    {
      sForm += tolower(c);
    }
  }

  int j = sForm.size() - 1;
  for (int i = 0; i < sForm.size(); i++)
  {
    
    if (sForm[i] != sForm[j])
    {
      cout << "false";
      return 0;
    }
    j--;
  }

  cout << "true";
  cout << endl;
  cout << sForm;

  return 0;
}