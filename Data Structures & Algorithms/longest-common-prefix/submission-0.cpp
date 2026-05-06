#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unordered_map<string, int>prefixMapCount;
        string result = "";

        for(auto it:strs){
            string prefix = "";
            for(char ch : it){
                prefix += ch;
                prefixMapCount[prefix]++;
            }
        }

        for(auto &it:prefixMapCount){
            if(it.second == strs.size()){
                if(it.first.size() > result.size())
                    result = it.first;
            }
        }
        return result;
    }
};