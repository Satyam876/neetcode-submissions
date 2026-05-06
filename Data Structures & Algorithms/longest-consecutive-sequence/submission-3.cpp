class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int count=0;
        int longest = 0;

        for(int it:nums){
            st.insert(it);
        }

        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int x = it;
                count = 1;

                while(st.find(x+1) != st.end()){
                    count++;
                    x = x+1;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
