#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i] != ch || strs[j].size() <= i){
                    return result;
                }
            }
            result += ch;
        }
        return result;
    }
};