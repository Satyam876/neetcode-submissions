class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;

        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];

            if(mpp.count(diff)){
                int indx1 = i;
                int indx2 = mpp[diff];

                if(indx1 < indx2)
                    return {indx1, indx2};
                else
                    return {indx2, indx1};
            }
            mpp[nums[i]] = i;
        }
    }
};
