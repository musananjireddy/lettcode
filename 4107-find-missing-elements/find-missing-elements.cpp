class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int  n= nums.size();
        set<int>mp(nums.begin(),nums.end());
        int max_val = *max_element(nums.begin(),nums.end());
        int min_val = *min_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=min_val;i<=max_val;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
           
        }
        return ans;
    }
};