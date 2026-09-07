class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xori=0;
        for(int i=1;i<=n;i++){
            xori=xori^i;
        }
        for(int i=0;i<n;i++){
            xori=xori^nums[i];
        }
        return xori;
    }
};
