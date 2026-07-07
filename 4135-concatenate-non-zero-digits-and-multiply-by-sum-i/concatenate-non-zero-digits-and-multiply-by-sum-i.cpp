class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>ans;
        int rev=0;
        while(n>0){
            int digit = n%10;
            if(digit!=0){
                ans.push_back(digit);
            }
            n= n/10;


        }
        reverse(ans.begin(),ans.end());
        long long res=0;
        long long sum=0;
        int p = ans.size();
        for(int i=0;i<p;i++){
            sum=sum+ans[i];
            res = res*10+ans[i];

        }
        return res*sum;
        
        
    }
};