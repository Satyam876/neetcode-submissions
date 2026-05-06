class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<vector<int>>temp(nums.size()+1);
        vector<int> ans;

        for(int it:nums){
            mp[it]++;
        }
        for(auto &it:mp){
            temp[it.second].push_back(it.first);
        }

        for(int i=temp.size()-1; i>=0 && ans.size()<k; i--){
            for(int num:temp[i]){
                ans.push_back(num);
                if(ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};
