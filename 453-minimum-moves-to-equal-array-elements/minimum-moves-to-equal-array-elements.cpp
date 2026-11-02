class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++){
            int res = nums[n-i-1]-nums[0];
            sum+=res;

        }
        return sum;
        
    }
};