// https://leetcode.com/problems/valid-palindrome/

using namespace std;
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(string s) {
        string sForm;

        for (char c : s) {
            if ((tolower(c) >= 'a' && tolower(c) <= 'z') || (c >= '0' && c <= '9')
) {
                sForm += tolower(c);
            }
        }

        int j = sForm.size() - 1;
        for (int i = 0; i < sForm.size(); i++) {
            
            if (sForm[i] != sForm[j]) {
                return false;
            }

            j--;
        }

        return true;
    }
};