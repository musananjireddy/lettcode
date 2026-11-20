class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int min_val = INT_MAX;
        //to minimus removing;
        int min1 = nums[2];
        int max1 = nums[n-1];
        int ans1 = abs(min1-max1);
        min_val = min(min_val,ans1);
        //to maximus removing;
        int min2 =nums[0];
        int max2 = nums[n-3];
        int ans2 = abs(min2-max2);
        min_val = min(min_val,ans2);
        //removing one maximum and one minimun
        int min3= nums[1];
        int max3= nums[n-2];
        int ans3= abs(min3-max3);
        min_val = min(min_val,ans3);
        return min_val;
        


        
    }
};