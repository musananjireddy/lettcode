class Solution {
public:

    void slove(vector<int>& nums,vector<int>& pair,vector<int>& visited,vector<vector<int>>&res){
        if(pair.size()==nums.size()){
            res.push_back(pair);
            return ;
        
        }
        
    
    for(int i=0;i<nums.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            pair.push_back(nums[i]);
            slove(nums,pair,visited,res);
            visited[i]=0;
            pair.pop_back();
        }


    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int>visited(n,0);
        vector<vector<int>>res;
        vector<int>pair;
        slove(nums,pair,visited,res);
        return res;
    }
};