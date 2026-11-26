class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int min_val= nums[i];
            int bit = nums[i];
            for(int j=i;j<n;j++){
                bit = (bit&nums[j]);
                min_val = min(min_val,nums[j]);
                if(min_val == bit){
                    cnt++;
                }
            }
        }
            return cnt;
               


        
    }
};