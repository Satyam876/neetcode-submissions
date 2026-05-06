class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> result;

        for(auto it:arr){
            int distance = abs(x-it);
            pq.push({distance, it});

            if(pq.size() > k)
                pq.pop();
        }

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        sort(result.begin(), result.end());
        return result;
    }
};