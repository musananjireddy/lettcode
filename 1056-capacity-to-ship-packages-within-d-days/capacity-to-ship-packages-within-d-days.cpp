class Solution {
public:
    bool capacity(vector<int>& weights, int days,int load){
        int sum=0;
        int day=1;
        for(int x:weights){
            sum+=x;
            if(sum>load){
                day++;
                sum=x;
            }
        }
        if(day<=days){
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int r=0;
        for(int x:weights){
            r+=x;
        }
        int ans=r;
        while(l<r){
            int mid =l+(r-l)/2;
            if(capacity(weights,days,mid)){
                r=mid;
                ans=min(ans,mid);
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
        
    }
};