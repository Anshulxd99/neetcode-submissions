#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans, int t) {
        // Base case 1: Target reached
        if (t == 0) {
            ans.push_back(ds);
            return;
        }

        // Base case 2: Out of bounds or target exceeded
        if (i == candidates.size() || t < 0) return;

        // CHOICE 1: TAKE candidates[i]
        if (candidates[i] <= t) {
            ds.push_back(candidates[i]);
            solve(i + 1, candidates, ds, ans, t - candidates[i]);
            ds.pop_back(); // Backtrack
        }

        // CHOICE 2: SKIP candidates[i] (and ALL duplicate instances of it)
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }
        solve(i + 1, candidates, ds, ans, t);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        // Sorting is required for duplicate handling
        sort(candidates.begin(), candidates.end());

        solve(0, candidates, ds, ans, target);
        return ans;
    }
};