//https://leetcode.com/problems/make-the-string-great/submissions/

class Solution {
public:
    string makeGood(string s) {
        
        //TC->O(n)   SC->O(n)
        if(s.size()==1)
        {
            return s;
        }
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
           
            if(!st.empty() && abs(st.top()-s[i])==32)
            {
                st.pop();
                
            }
            else
            {
                 st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
