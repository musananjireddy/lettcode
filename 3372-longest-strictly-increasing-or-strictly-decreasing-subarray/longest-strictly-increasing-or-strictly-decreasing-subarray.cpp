class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int max_val = 1;
        for(int i=0;i<n;i++){
            int sum=0;
            int prev=nums[i];
            for(int j=i+1;j<n;j++){
            
                if(prev<nums[j]){
                    max_val = max(max_val,j-i+1);
                    prev=nums[j];
                }
                else{
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            int sum=0;
            int prev=nums[i];
            for(int j=i+1;j<n;j++){
                if(prev>nums[j]){
                    max_val = max(max_val,j-i+1);
                    prev=nums[j];
                }
                else{
                    break;
                }
            }
        }
        
        return max_val;
       

    
        
    }
};