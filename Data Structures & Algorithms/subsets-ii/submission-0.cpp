class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<int>& newArray, vector<vector<int>>& result){
        if(index >= nums.size()){
            result.push_back(newArray);
            return;
        }

        newArray.push_back(nums[index]);
        backtrack(index+1, nums, newArray, result);
        newArray.pop_back();

        while((index+1) < nums.size() && nums[index+1] == nums[index])
            index++;
        backtrack(index+1, nums, newArray, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> newArray;
        sort(nums.begin(), nums.end());
        backtrack(0, nums, newArray, result);
        return result;
    }
};
