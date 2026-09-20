class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area=INT_MIN;
        int left=0;
        int right=heights.size()-1;
        while(left<right){
            int cur=min(heights[left],heights[right])*(right-left);
            max_area=max(max_area,cur);
            if(heights[left]<=heights[right])left++;
            else right--;
        }
        return max_area;
    }
};
