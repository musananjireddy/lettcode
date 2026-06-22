class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int max_val = INT_MIN;
        for(int i=0;i<n;i++){
            if(costs[i]>max_val){
                max_val = costs[i];
            }
        }
        vector<long long>ans(max_val+1,0);
        for(int x:costs){
            ans[x]++;
        }
        for(int i=1;i<=max_val;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        vector<long long>output(n);
        for(int i=n-1;i>=0;i--){
            output[ans[costs[i]]-1]=costs[i];
            ans[costs[i]]--;
        }
        long long sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=output[i];
            if(sum<=coins){
                count++;
            }

        }
        return count;
        
    }
};