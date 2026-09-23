#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int open, int close, int n, string& ds, vector<string>& ans) {
        // Base case: Placed all 'n' pairs of brackets
        if (open == n && close == n) {
            ans.push_back(ds);
            return;
        }

        // Choice 1: Add '(' if we still have available open brackets
        if (open < n) {
            ds.push_back('(');
            solve(open + 1, close, n, ds, ans);
            ds.pop_back(); // Backtrack
        }

        // Choice 2: Add ')' if it won't exceed the number of open brackets
        if (close < open) {
            ds.push_back(')');
            solve(open, close + 1, n, ds, ans);
            ds.pop_back(); // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string ds = "";
        solve(0, 0, n, ds, ans);
        return ans;
    }
};