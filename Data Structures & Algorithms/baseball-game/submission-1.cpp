class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int result=0;

        for(string ch:operations){
            if(ch == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1+top2);
            }
            else if(ch == "C")
                st.pop();
            else if(ch == "D")
                st.push(2*st.top());
            else
                st.push(stoi(ch));
        }

        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        return result;
    }
};