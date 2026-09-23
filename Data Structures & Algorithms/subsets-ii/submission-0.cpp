class Solution {
public:
void solve(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(ds);
        return ;
    }
    ds.push_back(nums[index]);
    solve(index+1,nums,ds,ans);
    ds.pop_back();
    while(index+1<nums.size()&&nums[index]==nums[index+1])index++;
    solve(index+1,nums,ds,ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,nums,ds,ans);
        return ans;
    }
};
