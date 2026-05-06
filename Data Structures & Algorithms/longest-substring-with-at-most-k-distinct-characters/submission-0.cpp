class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int left=0;
        int right=0;
        int longest=0;
        unordered_map<char, int>mp;

        while(right < s.size()){
            mp[s[right]]++;
            if(mp.size() > k){
                mp[s[left]]--;
                if(mp[s[left]] == 0){
                    mp.erase(s[left]);
                }
                left++;
            }
            longest = max(longest, right-left+1);
            right++;
        }
        return longest;
    }
};
