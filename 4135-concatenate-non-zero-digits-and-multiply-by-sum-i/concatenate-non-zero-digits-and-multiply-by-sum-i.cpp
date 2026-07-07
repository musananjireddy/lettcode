class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string res = to_string(n);
        string ans="";
        for(int i=0;i<res.size();i++){
            if(res[i]!='0'){
                ans+=res[i];
            }
        }
        long long  sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i]-'0';

        }
        int y = stoi(ans);
        long long sol = sum*y;
        return sol;
        
    }
};