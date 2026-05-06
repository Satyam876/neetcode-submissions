class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest=0;
        int maxFreq=0;
        int left=0;
        int right=0;
        unordered_map<char, int>mp;

        while(right < s.size()){
            char ch = s[right];
            mp[ch]++;
            maxFreq = max(maxFreq, mp[ch]);

            while((right-left+1)-maxFreq > k){
                mp[s[left]]--;
                left++;
            }
            longest = max(longest, (right-left+1));
            right++;
        }
        return longest;
    }
};
