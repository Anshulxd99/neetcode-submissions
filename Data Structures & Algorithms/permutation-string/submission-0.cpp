#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();
        if (n1 > n2) return false;

        vector<int> s1Count(26, 0), s2Count(26, 0);

        // Build initial frequency vectors for s1 and the first window of s2
        for (int i = 0; i < n1; i++) {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }

        if (s1Count == s2Count) return true;

        // Slide the window across s2
        for (int i = n1; i < n2; i++) {
            s2Count[s2[i] - 'a']++;       // Include new right character
            s2Count[s2[i - n1] - 'a']--;  // Exclude old left character

            if (s1Count == s2Count) return true;
        }

        return false;
    }
};