class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j = n-1;
        int total=0;
        while(i<=j){
            int val = nums[j]-nums[i];
            total+=val;
            i++;
            j--;

        }
        return total;
        
    }
};