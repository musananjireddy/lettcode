class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
         sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[1] == b[1]){
                return a[0] < b[0];
            }
        return a[1] > b[1];   
    });
        int count=0;
        if(n==1){
            return 1;
        }
        vector<int>cur;
        cur = intervals[0];
        for(int i=1;i<n;i++){
            if(cur[0]<=intervals[i][0] && cur[1]>=intervals[i][1]){
                count++;
                //cur[0]=min(cur[0],intervals[i][0]);
            }
            else{
                cur=intervals[i];
            }
        }
        return n-count;
        
    }
};