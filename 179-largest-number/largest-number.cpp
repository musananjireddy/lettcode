class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res="";
        sort(nums.begin(),nums.end(),[](int a,int b){
            return to_string(a)+to_string(b)>to_string(b)+to_string(a);
        });
        for(int x:nums){
            res+= to_string(x);
            
        }
        if(res[0]=='0' ){
            return "0";
        }
        return res;
        
    }
};