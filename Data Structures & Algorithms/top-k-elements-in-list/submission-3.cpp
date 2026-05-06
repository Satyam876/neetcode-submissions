class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int>mp;

        for(int it:nums){
            mp[it]++;
        }

        vector<vector<int>> buckets(nums.size()+1);

        for(auto it:mp){
            buckets[it.second].push_back(it.first);
        }

        for(int i=buckets.size()-1; i>=0 && result.size() < k; i--){
            for(int it:buckets[i]){
                result.push_back(it);
                if(result.size() == k)
                    break;
            }
        }
        return result;
    }
};
