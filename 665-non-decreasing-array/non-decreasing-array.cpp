class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp=nums;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                nums[i-1]=nums[i];
                break;
            }
        }
        bool found = true;;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                found = false;

            }

        }
        nums = temp;
         for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                nums[i]=nums[i-1];
                break;
            }
        }
        bool round=true;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                round = false;
            }
        }
        if(found==false && round ==false){
            return false;
        }
        return true;
        

       
    }
};