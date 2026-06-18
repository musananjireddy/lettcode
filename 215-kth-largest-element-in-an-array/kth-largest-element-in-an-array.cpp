class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int shift = 10000;
        vector<int>freq(20001,0);
        for(int x:nums){
            freq[x+shift]++;
        }
        for(int i=20000;i>=0;i--){
            k=k-freq[i];
            if(k<=0){
                return i-shift;
            }
        }
        return -1;
        
        
    }
};