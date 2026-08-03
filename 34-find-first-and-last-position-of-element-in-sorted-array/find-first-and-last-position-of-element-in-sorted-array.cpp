class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int first=-1;
        int last =-1;
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(nums[mid]==target){
                first=mid;
                j = mid-1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j = mid-1;
            }
        }
        int left =0;
        int right = n-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                last = mid;
                left = mid+1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return {first,last};
        
    }
};