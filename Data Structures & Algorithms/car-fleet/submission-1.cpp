class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, float>> distance;
        stack<float>st;

        for(int i=0; i<position.size(); i++){
            distance.push_back({position[i], (float)(target-position[i])/speed[i]});
        }

        sort(distance.begin(), distance.end());

        for(auto it:distance){
            while(st.size() && it.second >= st.top()){
                st.pop();
            }
            st.push(it.second);
        }
        return st.size();
    }
};
