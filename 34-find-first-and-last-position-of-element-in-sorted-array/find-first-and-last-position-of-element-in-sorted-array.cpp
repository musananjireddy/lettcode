class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0;
        int j= n-1;
        int ans =-1;
        while(i<=j){
            int mid  =i+(j-i)/2;
            if(nums[mid]==target){
                ans = mid;
                j = mid-1;

            }
            else if(nums[mid]<target){
                i = mid+1;

            }
            else{
                j = mid-1;
            }
        }
        int k=0;
        int l = n-1;
        int res=-1;
        while(k<=l){
            int mid = k+(l-k)/2;
            if(nums[mid]==target){
                res=mid;
                k =mid+1;
            }
            else if(nums[mid]<target){
                k= mid+1;
            }
            else{
                l = mid-1;
            }
        }
        return {ans,res};
    }
};