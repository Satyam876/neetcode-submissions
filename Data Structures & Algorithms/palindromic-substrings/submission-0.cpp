class Solution {
public:
    void checkPlaindromicSubstr(string&s, int left, int right, int &count){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
    }
    int countSubstrings(string s) {
        int count = 0;

        for(int i=0; i<s.size(); i++){
            checkPlaindromicSubstr(s, i, i, count);
            checkPlaindromicSubstr(s, i, i+1, count);
        }
        return count;
    }
};
