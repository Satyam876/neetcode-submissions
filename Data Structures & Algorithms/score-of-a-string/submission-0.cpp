class Solution {
public:
    int scoreOfString(string s) {
        int totalScore = 0;

        for(int i=1; i<s.size(); i++){
            totalScore += abs(s[i]-s[i-1]);
        }
        return totalScore;
    }
};