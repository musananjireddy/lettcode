class Solution {
public:
    long long prod(vector<int>&arr){
        long long p=1;
        for(int i=0;i<arr.size();i++){
            p=(long long)p*(long long)arr[i];
        }
        return p;
    }
    int l(vector<int>&arr){
        int lc=1;
        for(int i=0;i<arr.size();i++){
            lc=lcm(lc,arr[i]);
        }
        return lc;
    }
    int g(vector<int>&arr){
        int gc=0;
        for(int i=0;i<arr.size();i++){
            gc=gcd(gc,arr[i]);

        }
        return gc;
    }
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int max_val = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>arr;
                for(int k=i;k<=j;k++){
                    arr.push_back(nums[k]);
                   
                }
                if(prod(arr)>l(arr)*g(arr)){
                    break;
                }
                if(prod(arr)==l(arr)*g(arr)){
                    max_val = max(max_val,j-i+1);
                }
            }
        }
        return max_val;
        
    }
};