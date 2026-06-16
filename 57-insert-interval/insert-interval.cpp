class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        auto pos = lower_bound(intervals.begin(),intervals.end(),newInterval);
        intervals.insert(pos,newInterval);
        vector<vector<int>>ans;
        vector<int>curr= intervals[0];
        for(int k=1;k<intervals.size();k++){
            if(curr[1]>=intervals[k][0]){
                curr[1]=max(curr[1],intervals[k][1]);
            }
            else{
                ans.push_back(curr);
                curr = intervals[k];
            }
        }
        ans.push_back(curr);
        return ans;
        
    }
};