class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int res=0;
        while(l<=r){
         int time=0;
         int mid=(l+r)/2;
         for(auto i:piles){
            time+=(i+mid-1)/mid;
         }
         if(time<=h){
            res=mid;
            r=mid-1;
         }
         else l=mid+1;
        }
        return res;
    }
};
