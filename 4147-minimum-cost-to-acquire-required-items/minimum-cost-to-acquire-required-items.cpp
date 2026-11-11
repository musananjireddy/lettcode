class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long min_val = LLONG_MAX;
        long long ans1 = 1LL*cost1*need1;
        long long ans2 = 1LL*cost2*need2;
        min_val = min(min_val,(ans1+ans2));
        long long max_need = max(need1,need2);
        long long bothcon = costBoth*max_need;
        min_val = min(min_val,bothcon);
        long long min_need = min(need1,need2);
        long long res = costBoth*min_need;
        long long rem = abs(need1-need2);
        if(need1>need2){
            res+=rem*cost1;
        }
        else{
            res+=rem*cost2;
        }
        min_val = min(min_val,res);
        return min_val;


        
    }
};