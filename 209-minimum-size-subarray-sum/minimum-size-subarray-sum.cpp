class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int min_val =INT_MAX;
        int sum=0;
        int i=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                min_val = min(min_val,j-i+1);
                sum=sum-nums[i];
                i++;
            }
        }
        if(min_val == INT_MAX){
            return 0;
        }
        return min_val;

    }
};