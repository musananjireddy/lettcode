class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());
        int count=0;
        vector<long long>prefix(n,0);
        prefix[0]=costs[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+costs[i];
        }
        for(int i=0;i<n;i++){
            if(prefix[i]<=coins){
                count++;
            }
        }
        return count;
    }
};