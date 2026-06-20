class Solution {
public:
int sum;
int day;
    bool capacity(vector<int>& weights, int days,int mid){
        sum=0;
        day=1;
        for(int x:weights){
            sum+=x;
            if(sum>mid){
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
       // sum=0;
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