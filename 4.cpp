//https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st1,st2;
        string str1,str2;
        
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                st1.push(s[i]);
            }
            else if(s[i]=='#' && !st1.empty())
            //for the below test case we need that stack is non empty
            //"a##c"
            //"#a#c"
            {
                st1.pop();
            }
        }
        while(!st1.empty())
        {
            str1+=st1.top();
            st1.pop();
            
        }
        for(int i=0;i<t.size();i++)
        {
            if(isalpha(t[i]))
            {
                st2.push(t[i]);
            }
            else if(t[i]=='#' && !st2.empty())
            {
                st2.pop();
            }
        }
        while(!st2.empty())
        {
            str2+=st2.top();
            st2.pop();
            
        }
        if(str2==str1)
        {
            return true;
        }
        return false;
        
    }
};
