class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
    int n = nums.size();
    int curr= nums[0];
    int max_val = nums[0];
    for(int i=1;i<n;i++){
        curr = max(nums[i],curr+nums[i]);
        max_val = max(curr,max_val);
    }
    
    
   
    int totalsum =0;
    for(int i=0;i<n;i++){
        totalsum+=nums[i];

    }
    int curr1 = nums[0];
    int min_val = nums[0];
    for(int i=1;i<n;i++){
        curr1 = min(nums[i],curr1+nums[i]);
        min_val= min(curr1,min_val);
    }
    int circular = totalsum - min_val;
    int res= max(max_val,circular);
    if(res==0){
        return max_val;
    }
    return res;

        
    }
};