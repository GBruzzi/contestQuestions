#include <bits/stdc++.h>
using namespace std;



int main() {
  int n; cin >> n;
  vector<int> numbers(n);

  for (int i = 0; i < n; i ++) {
    cin >> numbers[i];
  }

  vector<int> ans;

  for (int c : numbers) {
    if (c != 0) {
      ans.push_back(c);
      continue;
    }

    ans.pop_back();
  } 

  int sum = 0;
  for (int c : ans) {
    sum += c;
  }

  cout << sum ;
  
}