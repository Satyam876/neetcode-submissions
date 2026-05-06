class Solution {
public:
    void backtrack(int index, vector<int>& candidates, int& target, int& sumTillNow,
    vector<int>& newArray, vector<vector<int>>& result){

            if(sumTillNow == target){
                result.push_back(newArray);
                return;
            }
            if(sumTillNow > target || index >= candidates.size()){
                return;
            }

            // take the index element
            sumTillNow += candidates[index];
            newArray.push_back(candidates[index]);
            backtrack(index+1, candidates, target, sumTillNow, newArray, result);

            // undo the changes
            sumTillNow -= candidates[index];
            newArray.pop_back();

            while((index+1) < candidates.size() && candidates[index+1] == candidates[index])
                index++;
            
            backtrack(index+1, candidates, target, sumTillNow, newArray, result);
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> newArray;
        int sumTillNow = 0;

        sort(candidates.begin(), candidates.end());

        backtrack(0, candidates, target, sumTillNow, newArray, result);
        return result;
    }
};
