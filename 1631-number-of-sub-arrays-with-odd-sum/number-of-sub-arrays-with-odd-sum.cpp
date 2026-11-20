class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int odd=0;
        int even=1;
        int sum=0;
        int   ans=0;
        const int MOD = 1000000007;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum%2==0){
                even++;
                ans=(ans+odd)%MOD;
            }
            else{
                odd++;
                ans=(ans+even)%MOD;
            }
        }
        return ans;
    }
};