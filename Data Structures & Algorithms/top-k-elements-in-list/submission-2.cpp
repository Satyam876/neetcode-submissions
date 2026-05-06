class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<vector<int>> buckets(nums.size()+1);
        vector<int> result;

        for(int it:nums){
            mp[it]++;
        }

        for(auto &it:mp){
            buckets[it.second].push_back(it.first);
        }

        for(int i=buckets.size()-1; i>=0 && result.size()<k; i--){
            for(int j:buckets[i]){
                result.push_back(j);
                if(result.size() == k)
                    break;
            }
        }
        return result;
    }
};
