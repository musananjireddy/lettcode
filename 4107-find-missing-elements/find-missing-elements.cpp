class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int  n= nums.size();
        sort(nums.begin(),nums.end());
        int max_val = *max_element(nums.begin(),nums.end());
        int min_val = *min_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=min_val;i<=max_val;i++){
            ans.push_back(i);
        }
        vector<int>res;
        int i=0;
        int j=0;
        while(j<n){
            if(ans[i]!=nums[j]){
                res.push_back(ans[i]);
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        return res;

        
    }
};