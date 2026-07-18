class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_val = *max_element(nums.begin(),nums.end());
        int min_val = *min_element(nums.begin(),nums.end());
        return __gcd(max_val,min_val);
        
    }
};