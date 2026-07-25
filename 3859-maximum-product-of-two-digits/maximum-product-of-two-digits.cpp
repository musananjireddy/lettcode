class Solution {
public:
    int maxProduct(int n) {
        string s= to_string(n);
        int p= s.size();
        sort(s.begin(),s.end());
        int max_val= ((s[s.size()-1]-'0') * (s[s.size()-2]-'0'));
        return max_val;
        
    }
};