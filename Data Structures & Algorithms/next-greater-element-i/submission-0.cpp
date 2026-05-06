class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int>mp;
        vector<int> result;

        for(int it:nums2){
            while(!st.empty() && st.top()<it){
                mp[st.top()] = it;
                st.pop();
            }
            st.push(it);
        }

        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }

        for(int it:nums1){
            result.push_back(mp[it]);
        }

        return result;
    }
};