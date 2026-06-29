class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        int n  =occupiedIntervals.size();
        vector<vector<int>>ans;
        vector<int>curr= occupiedIntervals[0];
        for(int i=1;i<n;i++){
            if(curr[1]+1>=occupiedIntervals[i][0]){
                curr[1]=max(curr[1],occupiedIntervals[i][1]);
                
            }
            else{
                ans.push_back(curr);
                curr=occupiedIntervals[i];
            }
        }
        ans.push_back(curr);
        vector<vector<int>>res;
        for(auto &v:ans){
            int l =v[0];
            int r =v[1];
            if(l>freeEnd || r<freeStart){
                res.push_back({l,r});
                continue;
            }
            if(l<freeStart){
                res.push_back({l,freeStart-1});
            }
            if(r>freeEnd){
                res.push_back({freeEnd+1,r});
            }
        }
        return res;

        
    }
};