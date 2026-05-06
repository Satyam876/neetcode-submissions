class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size())
            return false;

       unordered_map<char, int>mp1;
       unordered_map<char, int>mp2;
        int left=0;
        int right=0;

       for(char ch:s1){
            mp1[ch]++;
       }

       while(right < s2.size()){
            char ch = s2[right];
            mp2[ch]++;

            if((right-left+1) > s1.size()){
                mp2[s2[left]]--;
                if(mp2[s2[left]] == 0)
                    mp2.erase(s2[left]);
                left++;
            }
            if(mp1 == mp2)
                return true;
            right++;
       }
       return false;
    }
};
