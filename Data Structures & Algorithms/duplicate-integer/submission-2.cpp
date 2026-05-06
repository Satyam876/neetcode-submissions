class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dupArr;

        for(int n : nums){
            if(dupArr.count(n))
                return true;
            dupArr.insert(n);
        }
        return false;
    }
};