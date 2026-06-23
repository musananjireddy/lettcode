class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return ans;
        
    }
};