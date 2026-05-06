class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i=0;
       int j=heights.size()-1;
       int height = 0;
       int width = 0;
       int maxArea = 0;

       while(i < j){
            height = min(heights[i], heights[j]);
            width = j-i;
            maxArea = max(maxArea, height*width);

            if(heights[i] < heights[j])
                i++;
            else
                j--;
       }
       return maxArea;
    }
};
