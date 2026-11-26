class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>arr;
                int bit=nums[i];
                for(int k=i;k<=j;k++){
                    arr.push_back(nums[k]);
                    if(k>i){
                        bit = (bit&nums[k]);
                    }
                    
                }
                int min_val = *min_element(arr.begin(),arr.end());
                if(min_val==bit){
                    cnt++;
                }
            }
        }
        return cnt;


        
    }
};