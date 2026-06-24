class Solution {
public:
    int reverse(long long x){
        int rev =0;
        while(x>0){
            int digit = x%10;
            rev = rev*10+digit;
            x = x/10;

        }
        return rev;
    
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        const int mod =1e9+7; 
       // long long total = (long long)n*(n-1)/2;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-reverse(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int cnt =1;
        long long good = 0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                good+=cnt;
                cnt++;
            }
            else{
                cnt=1;
            }
        }
       
        return (good %mod);
        
    }
};