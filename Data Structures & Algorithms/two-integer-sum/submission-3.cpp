class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            int diff = target-nums[i];
            if(mp.count(diff)){
                result.push_back(mp[diff]);
                result.push_back(i);
            }
            mp[nums[i]] = i;
        }
        return result;
    }
};
