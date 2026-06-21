class Solution {
public:
    bool possible(vector<int>& piles, int h,int speed){
        long long hours=0;
        for(int x:piles){
            hours+=(x+speed-1)/speed;
        }
        if(hours<=h){
            return true;
        }
        return false;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j =*max_element(piles.begin(),piles.end());
        int ans= j;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(possible(piles,h,mid)){
                ans = min(ans,mid);
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        
        }
        return ans;
    }
};