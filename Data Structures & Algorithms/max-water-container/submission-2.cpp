class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i=0;
       int j=heights.size()-1;
       int height=0;
       int width=0;
       int maxWater=0;

       while(i < j){
            height = min(heights[i], heights[j]);
            width = j-i;
            maxWater = max(maxWater, height*width);

            if(heights[i] < heights[j])
                i++;
            else
                j--;
       }
       return maxWater;
    }
};
