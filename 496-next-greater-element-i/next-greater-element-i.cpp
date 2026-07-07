class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int x:nums2){
            while(!st.empty() && st.top()<x){
                mp[st.top()]=x;
                st.pop();
            }
            st.push(x);
        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        vector<int>ans;
        for(int p:nums1){
            ans.push_back(mp[p]);
        }
        return ans;
      
    }
};