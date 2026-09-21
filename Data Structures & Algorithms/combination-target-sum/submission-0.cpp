class Solution {
public:
void solve(int i,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums,int t){
    if(i==nums.size())return ;
    if(t==0){
     ans.push_back(ds);
     return;
    }
    if(nums[i]<=t){
        ds.push_back(nums[i]);
        solve(i,ds,ans,nums,t-nums[i]);
        ds.pop_back();
    }
    solve(i+1,ds,ans,nums,t);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ds,ans,nums,target);
        return ans;
    }
};
