class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            vector<vector<int>> result;
            priority_queue<pair<int, vector<int>>> pq;

            for(auto &it:points){
                int distance = (it[0]*it[0] + it[1]*it[1]);

                pq.push({distance, it});
                if(pq.size() > k)
                    pq.pop();
            }

            while(!pq.empty()){
                result.push_back(pq.top().second);
                pq.pop();
            }
            return result;
    }
};
