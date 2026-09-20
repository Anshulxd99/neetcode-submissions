class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int maxi=0;
        for(int right=0;right<s.size();right++){
          if(mp.find(s[right])!=mp.end()){
           while(left<=mp[s[right]]){
             mp.erase(s[left]);
             left++;
           }
          }
            mp[s[right]]=right;
          maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};
