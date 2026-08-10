class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            if(i>=k){
                st.erase(st.find(nums[i-k]));
            }
            if(i>=k-1){
                ans.push_back(*st.rbegin());
            }
        }
        return ans;
        
    }
};