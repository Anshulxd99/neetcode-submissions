class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        res.push_back(0);
        for(int i=1;i<=n;i++){
            int count=0;
            int temp=i;
            while(temp){
              temp=temp&(temp-1);
              count++;
            }
            res.push_back(count);
        }
        return res;
    }
};
