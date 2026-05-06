class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxWater=0;
        int height=0;
        int width=0;

        while(left < right){
            height = min(heights[left], heights[right]);
            width = right-left;
            maxWater = max(maxWater, (height*width));

            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }
        return maxWater;
    }
};
