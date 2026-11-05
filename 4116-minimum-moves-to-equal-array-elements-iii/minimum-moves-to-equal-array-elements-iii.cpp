class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max_val = INT_MIN;
        for(int i=0;i<n;i++){
            max_val = max(max_val,nums[i]);
        }
        int val=0;
        for(int i=0;i<n;i++){
            val+=max_val-nums[i];
        }
        return val;

        
    }
};