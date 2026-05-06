class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> temp;

        for(auto &row:matrix){
            for(int it:row){
                temp.push_back(it);
            }
        }

        int low=0;
        int high=temp.size()-1;

        while(low <= high){
            int mid = (low+high)/2;
            if(temp[mid] == target)
                return true;
            else if(temp[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
        return false;
    }
};
