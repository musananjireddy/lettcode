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
         for(int i=1;i<n;i++){
            if(temp[i-1]>temp[i]){
                temp[i]=temp[i-1];
                break;
            }
        }
        bool round=true;
        for(int i=1;i<n;i++){
            if(temp[i-1]>temp[i]){
                round = false;
            }
        }
        if(found==false && round ==false){
            return false;
        }
        return true;
        

       
    }
};