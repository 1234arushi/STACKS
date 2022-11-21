//https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

       //using :stack & map
       vector<int> ans(nums1.size(),-1);
       stack<int> st;
       unordered_map<int,int> m;//this stores element of nums2 as key and 
       //val as its next greater element for only those for which
       //next greater element exists

       for(int i=0;i<nums2.size();i++)
       {
           int ele=nums2[i];
           while(!st.empty() && ele>st.top())
           {
               m[st.top()]=ele;
               st.pop();
           }
           st.push(ele);
       }

       for(int i=0;i<nums1.size();i++)
       {
           if(m.find(nums1[i])!=m.end())
           {
               ans[i]=m[nums1[i]];
           }
       }
       return ans;

        
    }
};
