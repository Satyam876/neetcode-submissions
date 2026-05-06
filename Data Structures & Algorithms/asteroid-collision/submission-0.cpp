class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int it:asteroids){
            bool destroyed = false;

            while(!st.empty() && st.top()>0 && it<0){
                if(abs(it) > st.top()){
                    st.pop();
                }
                else if(abs(it) == st.top()){
                    st.pop();
                    destroyed = true;
                    break;
                }
                else if(abs(it) < st.top()){
                    destroyed = true;
                    break;
                }
            }

            if(!destroyed)
                st.push(it);
        }

        vector<int> result;

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};