class Solution {
public:
    int maxProduct(int n) {
        string s= to_string(n);
        int max_val = INT_MIN;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                int x= s[i]-'0';
                int y = s[j]-'0';
                max_val = max(max_val,x*y);

            }
        }
        return max_val;
        
    }
};