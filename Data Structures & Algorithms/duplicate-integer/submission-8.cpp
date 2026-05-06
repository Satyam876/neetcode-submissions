class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        unordered_set<int>st;

        for(int it:nums){
            if(st.count(it)){
                return true;
            }
            st.insert(it);
        }
        return false;
    }
};