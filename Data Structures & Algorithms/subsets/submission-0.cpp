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
        backtrack(index+1, nums, newArray, result);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> newArray;
        backtrack(0, nums, newArray, result);
        return result;
    }
};
