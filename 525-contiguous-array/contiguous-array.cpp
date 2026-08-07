class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int  n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        int len = 0;
        int max_val = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum)!=mp.end()){
                len=i-mp[sum];
                max_val = max(len,max_val);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return max_val;


        
    }
};