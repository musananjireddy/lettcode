class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        const int mod =1e9+7; 
       // long long total = (long long)n*(n-1)/2;
        for(int i=0;i<n;i++){
            string s = to_string(nums[i]);
            reverse(s.begin(),s.end());
            long long x = stoi(s);
            nums[i]=nums[i]-x;
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