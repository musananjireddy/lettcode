class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum=nums[0];
        int idx=0;
            for(int j=1;j<n;j++){
                if(nums[j]==nums[j-1]+1){
                    sum+=nums[j];
                    idx=j;
                }
                else{
                    break;
                }
            }
        unordered_set<int>mp(nums.begin(),nums.end());
        int x = sum;

        while(mp.find(x) != mp.end()) {
        x++;
}

        return x;
        
        
    }
};