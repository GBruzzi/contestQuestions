#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>

int main() {
    
    string s = "c";
    string t = "c";
    int ind;

    for (int i = 0; i < s.size(); ++i) {
        if (t[0] == s[i]) {
            ind = i;

            for (int j = 1; j < t.size(); j++) {
                if (t[j] != s[i + j]) {
                    break;
                }

                if (j == t.size() - 1) {
                    cout << ind;
                    return 0;
                }
            }
        }
    }

    cout << -1;

    return 0;
}
