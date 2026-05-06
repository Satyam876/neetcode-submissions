class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
            
        unordered_set<int> st;
        int count=0;
        int longest=INT_MIN;

        for(int it:nums){
            st.insert(it);
        }

        for(auto it:st){
            if(st.find(it-1) == st.end()){
                count = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    count++;
                    x += 1;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
