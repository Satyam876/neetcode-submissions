class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());

        for(int i=0; i<nums.size(); i++){
            ans[i] = nums[i];
        }
        for(int i=0,j=nums.size(); i<nums.size() && j<2*(nums.size()); i++,j++){
            ans[j] = nums[i]; 
        }
        return ans;
    }
};