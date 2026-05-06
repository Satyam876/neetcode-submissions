class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;

        int left=0;

        sort(s1.begin(), s1.end());

        while(left <= (s2.size() - s1.size())){
            string temp="";
            int right = left;
            while(right < left+s1.length()){
                temp += s2[right];
                right++;
            }
            sort(temp.begin(), temp.end());
            if(s1 == temp)
                return true;
            left++;
        }
        return false;
    }
};
