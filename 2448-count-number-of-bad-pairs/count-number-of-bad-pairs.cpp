class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long total =(long long)n*(n-1)/2;
        long long good=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            long long key=nums[i]-i;
            good+=mp[key];
            mp[key]++;
        }
        long long ans = total-good;
       
           
            
        return ans;
    }
};