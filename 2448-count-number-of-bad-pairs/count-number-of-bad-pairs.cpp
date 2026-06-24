class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long total =(long long)n*(n-1)/2;
        long long good=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]-i]++;
        }
        for(auto [num,count]:mp){
            if(count>1){
                good+= (long long)count*(count-1)/2;

            }
        }
        long long ans = total-good;
           
            
        return ans;
    }
};