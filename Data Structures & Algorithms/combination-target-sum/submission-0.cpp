class Solution {
public:
    void backtrack(int index, vector<int>& nums, int &target, int &sumTillNow,
                    vector<int>& newArray, vector<vector<int>>& result){
        
        if(sumTillNow == target){
            result.push_back(newArray);
            return;
        }
        if(sumTillNow > target)
            return;
        if(index >= nums.size())
            return;
        

        //take the index element
        sumTillNow += nums[index];
        newArray.push_back(nums[index]);
        backtrack(index, nums, target, sumTillNow, newArray, result);

        // undo the disturbance
        sumTillNow -= nums[index];
        newArray.pop_back();

        // skip the element
        backtrack(index+1, nums, target, sumTillNow, newArray, result);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> newArray;
        int sumTillNow = 0;

        backtrack(0, nums, target, sumTillNow, newArray, result);
        return result;   
    }
};
