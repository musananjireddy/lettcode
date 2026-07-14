class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int a = tasks.size();
        vector<int>freq(26,0);
        for(char c:tasks){
            freq[c-'A']++;
        }
        int max_freq = *max_element(freq.begin(),freq.end());
        int count=0;
        for(int f :freq){
            if(f==max_freq){
                count++;
            }
        }
        return max(a,((max_freq-1)*(n+1)+count));
        
    }
};