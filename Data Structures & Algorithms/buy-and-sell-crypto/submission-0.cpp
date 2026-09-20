class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int cur=0;
        int left=0;
        for(int i=0;i<prices.size();i++){
            cur=prices[i]-prices[left];
            maxi=max(maxi,cur);
            if(cur<0)left=i;
        }
        return maxi;
    }
};
