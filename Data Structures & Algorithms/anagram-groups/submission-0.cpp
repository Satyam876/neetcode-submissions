class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(auto str : strs){
            vector<int>count(26,0);
            for(auto ch : str){
                count[ch - 'a']++;
            }

            string key = "";
            for(int i : count){
                key += to_string(i) + "#"; 
            }
            mp[key].push_back(str);
        }

        vector<vector<string>>result;
        for(auto &it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};
