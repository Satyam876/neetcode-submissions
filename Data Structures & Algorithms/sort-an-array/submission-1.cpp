class Solution {
public:
    int partitionIndex(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i=low;
        int j=high;

        while(i<j){
            while(i<=high && nums[i] <= pivot)
                i++;
            while(nums[j] > pivot && j>= low)
                j--;
            if(i<j)
                swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }
    
    void quickSort(vector<int>& nums, int low, int high){
        if(low < high){
            int p = partitionIndex(nums, low, high);
            quickSort(nums, low, p-1);
            quickSort(nums, p+1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};