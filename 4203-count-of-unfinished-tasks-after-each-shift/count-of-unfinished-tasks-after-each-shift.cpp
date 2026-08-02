class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n= tasks.size();
        vector<long long>prefix(n);
        prefix[0]=tasks[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+tasks[i];
        }
        long long total = prefix[n-1];
        long long done=0;
        vector<int>ans;
        for(long long t:shifts){
            done+=t;
            if(done>=total){
                ans.push_back(0);
                done=0;
                continue;
            }
            int idx = upper_bound(prefix.begin(),prefix.end(),done)-prefix.begin();
            ans.push_back(n-idx);
            }
        
        
    return ans;
        
        
    }
};