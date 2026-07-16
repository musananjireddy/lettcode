class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>maxi(n);
        vector<int>prefix(n);
        int max_val = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max_val){
                max_val = nums[i];
            }
            maxi[i]=max_val;
        }
        for(int i=0;i<n;i++){
            prefix[i]= __gcd(nums[i],maxi[i]);
        }
        sort(prefix.begin(),prefix.end());
        int k = prefix.size();
        int i=0;
        int j = k-1;
        long long sum=0;
        while(i<j){
            int minval = prefix[i];
            int maxval = prefix[j];
            int res = __gcd(minval,maxval);
            sum+=res;
            i++;
            j--;
        }
        return sum;

        
    }
};