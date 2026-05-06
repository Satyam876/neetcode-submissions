class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        int count=0;
        int longest=1;
        int last=INT_MIN;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1 == last){
                count += 1;
                last = nums[i];
            }
            else if(nums[i] != last){
                count = 1;
                last = nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};
