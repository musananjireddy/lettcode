class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int max_val = INT_MIN;
        for(int i=0;i<n;i++){
            long long  lc=nums[i];
            long long gc = nums[i];
            long long pro=nums[i];
            for(int j=i+1;j<n;j++){
                pro=pro*nums[j];
                gc = gcd(gc,nums[j]);
                lc = lcm(lc,nums[j]);
                if(pro>gc*lc){
                    break;
                }
                if(pro==gc*lc){
                    max_val = max(max_val,j-i+1);
                }
            }
        }
        return max_val;
    }
};