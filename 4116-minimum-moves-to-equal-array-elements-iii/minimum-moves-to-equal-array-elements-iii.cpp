class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max_val = *max_element(nums.begin(),nums.end());
        int val=0;
        for(int i=0;i<n;i++){
            val+=max_val-nums[i];
        }
        return val;

        
    }
};