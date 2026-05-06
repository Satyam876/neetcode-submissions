class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>result(temperatures.size(), 0);
       stack<pair<int,int>> st;

       for(int i=0; i<temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                int index = st.top().second;
                st.pop();
                result[index] = i-index;
            }
            st.push({temperatures[i], i});
       }
       return result;
    }
};
