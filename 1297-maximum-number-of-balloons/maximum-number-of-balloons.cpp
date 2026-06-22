class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[text[i]-'a']++;
        }
        int count=0;
        while(true){
            if(freq[1]>=1&& freq[0]>=1 && freq[11]>=2 && freq[14]>=2 &&freq[13]>=1){
                count++;
                freq[1]--;
                freq[0]--;
                freq[11]-=2;
                freq[14]-=2;
                freq[13]--;
        }
        else{
            break;
        }
        }
        return count;

        
    }
};