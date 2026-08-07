class Solution {
public:
    int characterReplacement(string s, int k) {
        int max_freq=0;
        int max_val=0;
        unordered_map<int,int>freq;
        int i=0;
        for(int j=0;j<s.size();j++){
            freq[s[j]-'a']++;
            max_freq = max(max_freq,freq[s[j]-'a']);
            if((j-i+1)-max_freq>k){
                freq[s[i]-'a']--;
                i++;
            }
            max_val= max(max_val,j-i+1);



        }
        return max_val;
        
    }
};