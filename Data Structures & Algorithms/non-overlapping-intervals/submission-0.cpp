class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
       int prev_end=intervals[0][1];
       int count =0;
       for(int i=1;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(start<prev_end){
        count++;
        prev_end=min(prev_end,end);
        }
        else prev_end=end;
       }
       return count ;
    }
};
