//https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {

        //Method 1:using stacks
        stack<char>st;//int st=0;-->without stacks
        string ans;

        for(auto ch:s)
        {
            if(ch=='(')
            {
                //st>0
                if(st.size()>0)//such that internal char considered in ans
                {
                    ans+='(';
                }
                //st++;
                st.push('(');
            }
            else
            {
                //st>1
                if(st.size()>1)//such that internal pair considered in ans
                {
                    ans+=')';
                }
                //st--;
                st.pop();
            }
        }
        return ans;
        
    }
};
