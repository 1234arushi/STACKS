//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        
        int count=0;
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(count<st.size())
                {
                    count=st.size();
                }
                st.pop();
            }
        }
        return count;
        
    }
};
