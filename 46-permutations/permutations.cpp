class Solution {
public:
    void slove(vector<int>& nums,vector<int>& visited,vector<vector<int>>& pair,vector<int>& res){
        int n = nums.size();
        if(res.size()==nums.size()){
            pair.push_back(res);
            return;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                visited[i]=1;
                res.push_back(nums[i]);
                slove(nums,visited,pair,res);
                res.pop_back();
                visited[i]=0;
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n  = nums.size();
        vector<int>visited(n,0);
        vector<vector<int>>pair;
        vector<int>res;
        slove(nums,visited,pair,res);
        return pair;
        
    }
};