class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res="";
        sort(nums.begin(),nums.end(),[](int a,int b){
            return (to_string(a)+to_string(b))>(to_string(b)+to_string(a));
        });
        for(int x:nums){
            string s = to_string(x);
            res+=s;
        }
        if(res[0]=='0'){
            return "0";
        }
        return res;
        
    }
};