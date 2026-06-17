class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        vector<int>ans,res;
        for(int i=0;i<n/2;i++){
            ans.push_back(nums[i]);
        }
        for(int i=n/2;i<n;i++){
            res.push_back(nums[i]);
        }
        vector<int>result(n,0);
        for(int i=0;i<ans.size();i++){
            result[i*2+1]=ans[i];
            
        }
        for(int i=0;i<res.size();i++){
            result[i*2]=res[i];
        }
        nums=result;
        
        
    }
};