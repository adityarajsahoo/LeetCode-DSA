class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans; // taken code will modify
        stack<char> st;

        for(auto x: s)
        {
            if(x=='(')   // 1. ->add to stack    2. -> add to ans if not outermost
            {
                if(st.size()>0)
                    ans.push_back(x);
                st.push(x);
            }
            else  // 1. -> pop    2. -> add to ans if not empty
            {
                st.pop();
                if(!st.empty())
                    ans.push_back(x);
            }
        }
        return ans;
    }
};