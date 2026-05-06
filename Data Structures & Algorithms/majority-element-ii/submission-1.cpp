class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int, int>mp;
        vector<int> result;

       for(int it:nums){
        mp[it]++;
       }

       for(auto &it:mp){
        if(it.second > (nums.size()/3))
            result.push_back(it.first);
       }
       return result;
    }
};