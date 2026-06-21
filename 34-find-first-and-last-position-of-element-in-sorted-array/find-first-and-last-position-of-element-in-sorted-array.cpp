class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        if(nums.size()==1){
            if(nums[0]==target){
                return {0,0};
            }

        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        if(ans.empty()){
            return {-1,-1};
        }
        if(ans.size()==1){
            int x = ans[0];
            ans.push_back(x);
        }
        if(ans.size()>2){
            int p = ans[0];
            int q = ans[ans.size()-1];
            return {p,q};
        }
        return ans;
        
    }
};