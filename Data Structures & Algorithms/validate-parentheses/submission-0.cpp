class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(char ch: s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty())
                    return false;
                
                char topElement = st.top();
                st.pop();

                if(ch==')' && topElement != '(' ||
                    ch=='}' && topElement != '{' ||
                    ch==']' && topElement != '['){
                        return false;
                    }
            }
        }
        return st.empty();
    }
};
