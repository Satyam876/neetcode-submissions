class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int left=0;
        int right=0;
        int longest=0;

        while(right < s.size()){
            char ch = s[right];
            if(mp.count(ch)){
                if(mp[ch] >= left){
                    left = mp[ch]+1;
                }
            }
            int length = right-left+1;
            longest = max(longest, length);
            mp[ch] = right;
            right++;
            }
        return longest;
    }
};
