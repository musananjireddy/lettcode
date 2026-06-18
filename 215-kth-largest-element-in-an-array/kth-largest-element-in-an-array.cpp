class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    int OFFSET = 10000;
    vector<int> freq(20001, 0); // range [-10000,10000]

    for (int x : nums) {
        freq[x + OFFSET]++;
    }

    for (int i = 20000; i >= 0; i--) {
        k -= freq[i];
        if (k <= 0) {
            return i - OFFSET;
        }
    }

    return -1;

        
    }
};