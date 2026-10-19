class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(2*nums.size());

        if(nums.empty())
            return result;

        for(int i=0; i<nums.size(); i++){
            result[i] = nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            result[nums.size()+i] = nums[i];
        }

        return result;
    }
};