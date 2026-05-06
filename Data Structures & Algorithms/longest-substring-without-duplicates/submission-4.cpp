class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int longest=0;
        unordered_map<char, int>mp;

        while(right < s.size()){
            char ch = s[right];

            if(mp.count(ch)){
                if(mp[ch] >= left)
                    left = mp[ch]+1;
            }
            mp[ch] = right;
            longest = max(longest, right-left+1);
            right++;
        }
        return longest;
    }
};
