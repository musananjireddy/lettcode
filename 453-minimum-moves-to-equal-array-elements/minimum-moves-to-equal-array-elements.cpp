class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min_val = INT_MAX;
        for(int i=0;i<n;i++){
            min_val = min(nums[i],min_val);
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            int res = nums[i]-min_val;
            sum+=res;

        }
        return sum;
        
    }
};