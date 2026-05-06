class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0;
       int right = 0;
       int longest = 0;
       unordered_map<char, int> mp;

       for(char ch: s){
            if(mp.count(ch)){
                if(mp[ch] >= left)
                    left = mp[ch]+1;
            }
            longest = max(longest, right-left+1);
            mp[ch] = right;
            right++;
       }
       return longest;
    }
};
