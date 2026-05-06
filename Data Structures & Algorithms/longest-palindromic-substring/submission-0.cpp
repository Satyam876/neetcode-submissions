class Solution {
public:
    void lps(string& s, int left, int right, int& start, int& maxLen){
        while(left >=0 && right < s.size() && s[left] == s[right]){
            int len = right-left+1;
            if(len > maxLen){
                start = left;
                maxLen = len;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 0;

        for(int i=0; i<s.size(); i++){
            lps(s, i, i, start, maxLen);
            lps(s, i, i+1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }
};
