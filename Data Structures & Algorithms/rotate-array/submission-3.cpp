class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        int i=start;
        int j=end;

        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums,k, nums.size()-1);
    }
};