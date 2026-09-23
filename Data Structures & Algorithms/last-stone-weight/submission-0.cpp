class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int val=a-b;
            if(val!=0)pq.push(val);
        }
        if(pq.size())return pq.top();
        return 0;
    }
};
