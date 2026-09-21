class Solution {
public:
void solve(int index ,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
    if(index==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]);
    solve(index+1,ds,ans,nums);//Take
    ds.pop_back();
    solve(index+1,ds,ans,nums);//Not Take
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ds,ans,nums);
        return ans;
    }
};
