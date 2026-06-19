class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  n = nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int  mid= (i+j)/2;
            if(nums[mid]>nums[j]){
                i = mid+1;
            }
            else{
                j = mid;
            }
        }
            int p=i;
            if(nums[p]<=target && nums[n-1]>=target){
                i=p;
                j=n-1;
            }
            else{
                i=0;
                j=p-1;
            }
            while(i<=j){
                int mid = (i+j)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            return -1;
    }
};