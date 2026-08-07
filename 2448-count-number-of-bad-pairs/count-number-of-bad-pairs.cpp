class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        long long total = (long long)n*(n-1)/2;
        long long good=0;
        for(int i=0;i<n;i++){
            good+=mp[nums[i]-i];
            mp[nums[i]-i]++;
        }
        return total-good;
        
    }
};